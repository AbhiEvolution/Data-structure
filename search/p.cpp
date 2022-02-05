#include <iostream>
#include <algorithm>
using namespace std;

void search(int a[], int n)
{
    int fr[n];
    int visited = -1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                fr[j] = visited;
            }
        }
        cout<<fr[i]<<" "<<visited<<" "<<endl; 
        if (fr[i] != visited)
        cout<<count<<endl;
            fr[i] = count;
    }

  cout<<"---------------------\n";
 cout<<" Element | Frequency\n";
  cout<< "---------------------\n";
    for (int i = 0; i < n; i++)
    {
        if (fr[i] != visited)
        {
           cout<<"    "<< a[i]<<" | " << fr[i]<<endl;
        }
    }

}
int main()
{
    int a[100], size;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    sort(a, a + size);
    search(a, size);
    cout << endl;
}