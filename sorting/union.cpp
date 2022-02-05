#include <iostream>
#include <algorithm>
using namespace std;
void unionfxn(int a[], int m, int b[], int n, int c[])
{
    int d[200];
    int k = 0,j=0;
    for (int i = 0; i < m; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        c[k] = b[i];
        k++;
    }
    sort(c, c+k);
    for (int i = 0; i <k; i++)
    {
        if(c[i]!=c[i+1])
        {
            d[j]=c[i];

            j++;
        }
    }
    for (int i = 0; i <j; i++)
    {
        cout << d[i] << " ";
    }

}

int main()
{
    int a[100], b[100], c[200];
    int s1, s2;

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
    unionfxn(a, s1, b, s2, c);
}