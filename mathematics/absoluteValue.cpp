#include<iostream>
using namespace std;

int absolute(int i)
{
  if(i<0)
  {
      return i*-1;
  }
  return i;
} 

int main()
{
    int num;
    cout<<"\nEnter a Number: "; cin>>num;
    cout<<"\nThe absolute value of "<<num<<" is "<<absolute(num)<<endl; 
}