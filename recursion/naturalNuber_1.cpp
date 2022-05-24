#include<iostream>

using namespace std;

void print1(int n) 
{
  if (n < 1)
    return;
  else
  {
    cout<<n<<endl;
    print1(n-1);
  }
}

void print2(int n) 
{
  if (n < 1)
    return;
  else
  {
    print2(n-1);
    cout<<n<<endl;
  }
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"================================================="<<endl;
    print1(num);
    cout<<"================================================="<<endl;;
    print2(num);
    cout<<"================================================="<<endl;;
}