#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int l, w;
	cout << "������� ����� �������� ��������� ";
	cin >> l;
	cout << "������� ������ ";
	cin >> w;
	if (l == 0 || w == 0)
	{
		cout << "������������ ������";
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