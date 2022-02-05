#include <iostream>

using namespace std;

bool tripletfxn(int a[], int m)
{
  for (int i = 0; i < m - 2; i++)
  {
    for (int j = i + 1; j < m - 1; j++)
    {
      for (int k = j + 1; k < m; k++)
      {
        if (a[i] + a[j] + a[k] == 0)
        {
          cout << a[i] << " " << a[j] << " " << a[k] << endl;
          return true;
        }
      }
    }
  }
  return false;
}

int main()
{
  int a[10], s1;

  cout << "\nEnter the size of the array1: ";
  cin >> s1;
  for (int i = 0; i < s1; i++)
  {
    cin >> a[i];
  }

  cout<<tripletfxn(a, s1);
  cout << endl;
}