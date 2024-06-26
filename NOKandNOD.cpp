#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, x, y;
	cout << "Введите два натуральных числа ";
		cin >> x >> y;
		a = x;
		b = y;
		if (a == 0 || b == 0)
		{
			cout << "Невозможно определить НОК и НОД для нуля!" << endl;
		}
		else
		{
			while (a != b)
			{
				if (a > b)
				{
					a -= b;
				}
				else
				{
					b -= a;
				}
			}
		}
		b = (x * y) / a;
		cout << "НОД: " << a <<endl<< "НОК: " << b;
		return 0;
}
