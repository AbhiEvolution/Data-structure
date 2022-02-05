#include <iostream>

using namespace std;

void insertAtEnd(int arr[], int n, int element)
{
    arr[n] = element;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50], size, x;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "Before insert At End" << endl;
    print(arr, size);
    cout << "\nEnter the element to be inserted at the end: ";
    cin >> x;
    insertAtEnd(arr, size, x);
    cout << endl
         << "After insert At End" << endl;
    print(arr, size + 1);
    cout << endl;
}