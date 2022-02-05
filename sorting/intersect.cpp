#include <iostream>

using namespace std;

void intersectfxn(int a[], int m, int b[], int n, int c[])
{
    int k = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = b[j];
                k++;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (c[i] != c[i + 1])
        {
            cout << c[i] << " ";
        }
    }
}

int main()
{
    int a[10], b[10], c[20], s1, s2;

    cout << "\nEnter the size of the array1: ";
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter the size of the array2: ";
    cin >> s2;
    for (int i = 0; i < s2; i++)
    {
        cin >> b[i];
    }
    intersectfxn(a, s1, b, s2, c);
    cout << endl;
}