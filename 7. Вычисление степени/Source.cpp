#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x, n, a;
    cout << "������� �����: ";
    cin >> x;
    cout << "������� ������� �����: ";
    cin >> n;
    a = pow(x, n);
    cout << "�����: " << a;
    return 0;
}