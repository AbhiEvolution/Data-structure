#include <iostream>

using namespace std;
int search(int a[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100], size, element;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to search: ";
    cin >> element;
    cout << search(arr, size, element);
    cout <<endl;
}