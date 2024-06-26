#include <iostream>
using namespace std;

int reverse(int num)
{
    int n = 0;
    while (num)
    {
        n = 10 * n + num % 10;
        num /= 10;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите целое число: ";
    cin >> num;
    if (num == reverse(num))
        cout << "Число является палиндромом!" << endl;
    else
        cout << "Число не является палиндромом!" << endl;
    return 0;
}

