#include <iostream>

using namespace std;
int sumofdigit(int n)
{
    int res=0;
    if(n>0) 
    {
        return res;
    }
    else 
    {
        return res%10 + sumofdigit(n/10);
    }
}

int main()
{
    int n;
    cout << "\nEnter a digit: ";
    cin >> n;
    cout << sumofdigit(n);
}