#include <iostream>

using namespace std;
void func(int n)
{
    if (n < 1)
    {
        return;
    }
    func(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "\nEnter the number: ";
    cin >> n;
    func(n);
}