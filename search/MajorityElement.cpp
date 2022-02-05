#include <iostream>
#include <algorithm>
using namespace std;
// int search(int a[], int n)
// {
//     int c;
//     for (int i = 0; i < n; i++)
//     {
//          c = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 c++;
//             }
//         }
//         if (c > n / 2)
//         {
//             // cout << "c= " << c << endl;
//             // cout << "n/2= " << n / 2;
//             cout << endl;
//             return 1;
//         }
//     }
//     // cout << "c= " << c << endl;
//     // cout << "n/2= " << n / 2;
//     cout << endl;

//     return -1;
// }


int search(int a[], int n)
 {

 }
int main()
{
    int arr[100], size;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr +size);
    cout << search(arr, size);
    cout << endl;
}