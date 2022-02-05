#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;
}

int main()
{

    int res, choice, num1, num2;
    cout << "Enter the  choice: ";
    do
    {

        cout << "1.+  2.-  3.*  4./ -1.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter a digit: ";
            cin >> num1;
            cout << "\nEnter another digit: ";
            cin >> num2;
            res = sum(num1, num2);
            cout << res << endl;
            break;
        case 2:
            cout << "Enter a digit: ";
            cin >> num1;
            cout << "\nEnter another digit: ";
            cin >> num2;
            res = sub(num1, num2);
            cout << res << endl;
            break;
        case 3:
            cout << "Enter a digit: ";
            cin >> num1;
            cout << "\nEnter another digit: ";
            cin >> num2;
            res = mul(num1, num2);
            cout << res << endl;
            break;
        case 4:
            cout << "Enter a digit: ";
            cin >> num1;
            cout << "\nEnter another digit: ";
            cin >> num2;
            res = divi(num1, num2);
            cout << res << endl;
            break;
        }

    } while (choice != -1);
}