// Lab_4_7.cpp
// Козубенко Андрій
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 10
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double xp, x, xk, dx, eps, a, R, S;
	int n;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5)  << "x"      << "     |"
	   	        << setw(10) << "atanh(x)" << "   |"
		        << setw(7) << "S"      << "      |"
		        << setw(5)  << "n"      << "   |"
		        << endl;
	cout << "-------------------------------------------------" << endl;

	for(x = xp; x <= xk; x += dx)
	{
		n = 0;
		a = x;
		S = a;

		do {
			n++;
			R = 1. * x * x * (2. * n - 1) / (2. * n + 1);
			a *= R;
			S += a;
		}while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(5) << atanh(x) << "   |"
			<< setw(10) << setprecision(5) << S << "   |" << setw(5) << n << "   |" << endl;

	}
	cout << "-------------------------------------------------" << endl;

	return 0;
}