#include <iostream>
#include <algorithm>

using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void frequency(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = 0; j < n; j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
        }
    }
}
int main()
{
    int a[50], n, b[50];
    cout << "\nEnter the size of the Array: ";
    cin >> n;
    cout << "\nEnter the numbers\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nBefore sort: ";
    print(a, n);
    cout << endl;
    sort(a, a + n);
    cout << "\nAfter sort: ";
    print(a, n);
    frequency(a, n, b);
}