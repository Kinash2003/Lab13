// Lab_13_1.cpp
#include <iostream>
#include <iomanip>
#include <cmath>

#include "dod.h"
#include "suma.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "xp = "; cin >> x_p;
	cout << "xk = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;

	cout << "---------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(10) << "x" << setw(10) << "|";
	cout << setw(14) << "Arth(x)" << setw(6) << "|";
	cout << setw(10) << "n" << setw(10) << "|";
	cout << setw(10) << "s" << setw(10) << "|" << endl;
	cout << "---------------------------------------------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k)
	{
		sum();

		cout << "|" << setw(10) << setprecision(3) << x << setw(10) << "|";
		cout << setw(10) << setprecision(3) << 0.5 * ((log(1. + x) - log(1. - x))) << "|";
		cout << setw(10) << setprecision(3) << n << setw(10) << "|";
		cout << setw(10) << setprecision(3) << s << "|" << endl;

		x += dx;
	}

	cout << "---------------------------------------------------------------------------------" << endl;

	return 0;
}
/*
#include <iostream>
#include <math.h>
#include <iomanip>

#include "var.h"
#include "suma.h"
#include "dod.h"

using namespace std;

using namespace nsVar;
using namespace nsDod;

int main()
{
	using nsSum::sum;

	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "Arth(x)" << " |"
		<< setw(7) << "s" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k) {

		sum();
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << 0.5 * ((log(1. + x) - log(1. - x))) << " |"
			<< setw(10) << setprecision(5) << -s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------";

	return 0;
}
*/