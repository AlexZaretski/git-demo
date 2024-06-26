#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, x1, x2, d;
    cout << "Введите коэффициенты квадратного уравнения: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Невозможно решить!";
        }
        else
        {
            x1 = (c * (-1)) / b;
            cout << "x = " << x1;
        }
    }
    else
    {
        if (d < 0)
        {
            cout << "Нет решений!";
        }
        else
        {
            x1 = (b * (-1) + sqrt(d)) / (2 * a);
            x2 = (b * (-1) - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << " x2 = " << x2;
        }
    }
    return 0;
}
