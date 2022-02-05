#include <iostream>

using namespace std;


long long factorial(int N)
{
    long long result=1;
 
    for(int i = 1; i <= N; i++)
    {
       result = result * i;
    }
    return result;
} 
int main()
{
    int num;
    cout<<"\nEnter the number: "; cin >>num;
    cout<<"Factorial: "<< factorial(num)<<endl;
}