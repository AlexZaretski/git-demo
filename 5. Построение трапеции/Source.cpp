#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int l, w;
	cout << "Задайте длину верхнего основания ";
	cin >> l;
	cout << "Задайте высоту ";
	cin >> w;
	if (l == 0 || w == 0)
	{
		cout << "Некорректные данные";
	}
	for (int a = 0;a < w;a++)
	{
		for (int x = l +a;x>0; x--)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}