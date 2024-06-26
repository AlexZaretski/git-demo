#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double x, n, a;
    cout << "¬ведите число: ";
    cin >> x;
    cout << "¬ведите степень числа: ";
    cin >> n;
    a = pow(x, n);
    cout << "ќтвет: " << a;
    return 0;
}