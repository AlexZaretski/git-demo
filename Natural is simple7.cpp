#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
    bool c = true;
    cout << "¬ведите натуральное число: " << endl;
    cin >> a;
    if (a <= 1)
    {
        cout << "„исло не натуральное или равно 1!";
    }
    else 
    {
        for (b = 2; b <= a / 2; b++)
        {
            if (a % b == 0) 
            { 
            c = false;
            break;
            }
        }
        if (c) cout<<a << " - простое число";
        else cout<<a << " - составное число";
    }
    return 0;
}