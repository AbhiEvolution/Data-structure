#include <iostream>
#include <algorithm>
using namespace std;
int search(int a[], int n, int x)
{
  int mid;
  int lm = 0;
  int um = n;
  while (lm <= um)
  {
    mid = lm + um / 2;

    if (a[mid] == x)
    {
      return mid;
    }
    else if (a[mid]< x)
    {
      lm = mid + 1;
    }
    else
    {
      um = mid - 1;
    }
  }
  return -1;
}

void sort(int a[], int n)
{
  int temp;
  int j = 0;
  int i = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (a[j] > a[j + 1])
      {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
}
void print(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
int main()
{
  int arr[10], size, element;
  cout << "\nEnter the size of the array: ";
  cin >> size;
  cout << "\nEnter the elements\n";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  // sort(arr, arr + size);
  cout << "\nEnter the element to search: ";
  cin >> element;
  cout << search(arr, size, element);
  cout << endl;
}