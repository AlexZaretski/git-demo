#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	long result=1;
	cout << "Введите число для определения факториала ";
	cin >> n;
	if (n < 0) 
	{
		cout << "Факториал отрицательного числа не определен!"<<endl;
		return 0;
	}
	else
	{
		for (int i = 2;i <= n; i++)
			result *= i;
		cout << "Факториал "<<n<<" равен : "<<result << endl;
	}
	return 0;
}