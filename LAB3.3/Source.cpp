// Lab_03_3.cpp
// < Качалуп Денис >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double r;
	double y;

	cout << "x= "; cin >> x;
	cout << "r= "; cin >> r;


	if (x <= -1 - r)
		y = (-x - 1 - r);
	else
		if (-1 - r < x && x <= -1)
			y = (-sqrt(r - (x - 1)));
		else
			if (-1 < x && x <= 1)
				y = r;
			else
				if (1 < x && x <= 2)
					y = (x + x * r - 1 - 4 * r) / 3;
				else
					if (x >= 2)
						y = 1;

	cout << endl;
	cout << "y= " << y << endl;

	cin.get();
	return 0;

}