#include <iostream>

using namespace std;

void closefxn(int a[], int m)
{
    int k = 0;
    int b[10];

    for (int i = 0; i < m; i++)
    {
        if (a[i] == 0)
        {
            b[k++] = a[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 1)
        {
            b[k++] = a[i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (a[i] == 2)
        {
            b[k++] = a[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int a[10], s1;

    cout << "\nEnter the size of the array1: ";
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
        cin >> a[i];
    }

    closefxn(a, s1);
    cout << endl;
}