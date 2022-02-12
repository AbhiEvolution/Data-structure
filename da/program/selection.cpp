#include <iostream>

using namespace std;

int mini(int arr[], int lb, int ub)
{
    int m = lb;
    while (lb < ub)
    {
        if (arr[lb] < arr[m])
        {
            m = lb;
            lb++;
        }
    }
    return m;
}

void selection(int arr[], int s)
{
    int i = 0, loc = 0, temp = 0;
    for (i = 0; i < s; i++)
    {
        loc = mini(arr, i, s);
        temp = arr[loc];
        arr[loc] = arr[i];
        arr[i] = temp;
    }
}
void print(int arr[], int s)
{
    for(int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={5,4,3,2,1};
    int size=5;

   // cout << "\nEnter the size of the array: ";
    // cin >> size;
    // cout << "\nEnter the Element\n";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    cout << "\nBefore sort: ";
    print(arr, size);
    // selection(arr, size);
    // cout << "\nAfter sort: ";
   // print(arr, size);
}