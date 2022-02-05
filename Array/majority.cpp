#include <iostream>

using namespace std;

int majority(int array[], int size, int x, int y)
{
  int c = 0, d = 0;
  for (int i = 0; i < size; i++)
  {
    if (array[i] == x)
    {
      c++;
    }
    else if (array[i] == y)
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
 return min(x, y);
}

int main()
{
  int arr[50], size, x, y;
  cout << "\nEnter the size of the array: ";
  cin >> size;
  cout << "\nEnter the elements\n";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "\nEnter the first number: ";
  cin >> x;
  cout << "\nEnter the second number: ";
  cin >> y;
  cout << endl;
  cout<<majority(arr, size, x, y);
  cout << endl;
}