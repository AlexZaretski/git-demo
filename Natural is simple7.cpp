#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
    bool c = true;
    cout << "������� ����������� �����: " << endl;
    cin >> a;
    if (a <= 1)
    {
        cout << "����� �� ����������� ��� ����� 1!";
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
        if (c) cout<<a << " - ������� �����";
        else cout<<a << " - ��������� �����";
    }
    return 0;
}