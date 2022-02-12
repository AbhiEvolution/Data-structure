#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int values[100];
    int i;
    cout << "\n================\n";
    cout << "\nFor Exit press 999";
    while (true)
    {
        if (values[i] != -999)
        {
            break;
        }
        else
        {
            cin >> values[i];
            i++;
        }
    }
    cout << "\n================\n";
    for (int i=0;values[i]!=-999;i++) 
    {
        cout << i << " ";
    }
    cout << "\n================\n";
}