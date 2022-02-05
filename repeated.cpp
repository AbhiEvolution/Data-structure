
#include <iostream>
#include <algorithm>
using namespace std;

int majority(int arr[], int size, int x, int y)
{
    int c = 1, d = 1;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == x)
        {
            c++;
        }

        else if (arr[i] == y)
        {
            d++;
        }
    }
    if (c > d)
    {
        return x;
    }
    else if (d > c)
    {
        return y;
    }
    return x;
}

int main()
{
    int arr[50], size, x, y;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter First majority Number: ";
    cin >> x;
    cout << "\nEnter second majority Number: ";
    cin >> y;
    sort(arr, arr + size);

    cout << majority(arr, size, x, y);
    cout << endl;
}
