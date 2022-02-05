#include <iostream>

using namespace std;

int a[100];
// bool isPrime(int N)
// {
//     for (int i = 2; i < N; i++)
//     {
//         if (N % i==0)
//         {
//             cout << N << " is Disible by " << i<<endl;
//             return false;
//         }
//     }
//     return true;
// }

void isPrime(int lower, int upper)
{
    int c = 0;
    for (int i = lower; i <= upper; i++)
    {

        bool res = false;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            if (j == i)
            {
                res = true;
            }
        }
        cout << "c: " << c << endl;
        if (res == true)
        {
            a[i] = i;
            c++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int lower, upper;
    cout << "\nEnter a lower limit: ";
    cin >> lower;
    cout << "\nEnter a upper limit: ";
    cin >> upper;
    cout << endl;
    isPrime(lower, upper);
}