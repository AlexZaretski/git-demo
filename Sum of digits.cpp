#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
        int a;
        cout << "������� ����� �����: ";
        cin >> a;
        int modul = abs(a),sum=0;
        while (modul > 0) 
        {
            int ost = modul % 10;
            sum += ost;
            modul /= 10;
        }
        cout << "����� ���� �����: " << sum << endl;
        return 0;
    }
