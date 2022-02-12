#include <iostream>
#include <vector>
#include <map>

using namespace std;

void frequency(int a[], int n, int p)
{
    map<int, int> map;
    int c;
    for (auto i = 1; i <= p; i++)
    {
        c=0;
        for (auto j= 0; j != n; j++)
        {
            if (i ==j)
            {
                c++;
            }
        }
        cout<<c<<" ";
    }
}

int main()
{
   // vector<int> a;
   int a[50];
    int n, k, p;

    cout << "\nEnter the size of the vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
     //   a.push_back(k);
    }
    // cout << "\nEnter the range: ";
    // cin >> p;

    frequency(a, n, p);
}
