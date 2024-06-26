#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
        int a;
        cout << "Введите целое число: ";
        cin >> a;
        int modul = abs(a),sum=0;
        while (modul > 0) 
        {
            int ost = modul % 10;
            sum += ost;
            modul /= 10;
        }
        cout << "Сумма цифр числа: " << sum << endl;
        return 0;
    }
