#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	long result=1;
	cout << "������� ����� ��� ����������� ���������� ";
	cin >> n;
	if (n < 0) 
	{
		cout << "��������� �������������� ����� �� ���������!"<<endl;
		return 0;
	}
	else
	{
		for (int i = 2;i <= n; i++)
			result *= i;
		cout << "��������� "<<n<<" ����� : "<<result << endl;
	}
	return 0;
}