#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b, x, y;
	cout << "������� ��� ����������� ����� ";
		cin >> x >> y;
		a = x;
		b = y;
		if (a == 0 || b == 0)
		{
			cout << "���������� ���������� ��� � ��� ��� ����!" << endl;
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
		cout << "���: " << a <<endl<< "���: " << b;
		return 0;
}
