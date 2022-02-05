//frequency

#include <iostream>
#include <algorithm>
#include<map>
#include <iterator>
using namespace std;


void frequency(int a[], int n)
{
    map<int, int> gquiz1;
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = 0; j < n; j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
        }
        gquiz1.insert(pair<int, int>(a[i],c));
    }

    map<int, int>::iterator itr;
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

}
int main()
{
    int a[50], n;
    cout << "\nEnter the size of the Array: ";
    cin >> n;
    cout << "\nEnter the numbers\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    frequency(a, n);
}