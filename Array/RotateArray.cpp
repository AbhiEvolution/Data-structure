#include <iostream>

using namespace std;

void rotate(int arr[], int size)
{
  int element;
  element=arr[0];
  for(int i= 0; i < size; i++)
  {
      arr[i]=arr[i+1];
  }
  arr[size-1]=element;
}

void rotateArr(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++)
    {
        rotate(arr, n);
    }
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
    int arr[100], size, r;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nBefore Rotation: ";
    print(arr, size);
    cout << "\nHow many do you want to rotate: ";
    cin >> r;
    rotateArr(arr, size, r);
    cout << "\nAfter Rotation: ";
    print(arr, size);
    cout<<endl;
}