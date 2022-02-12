#include<iostream>

using namespace std;


void toh(int n, int a, int b, int c)
{
 if(n>0)
 {
     toh(n-1, a, c, b);
     cout<<"\nMove a Disc from "<<a<<" to "<<c<<endl;
     toh(n-1, b, a, c);
 }
}

int main()
{
    int n,a=1,b=2,c=3;
    cout<<"\nEnter the Number of disc: "<<endl; cin>>n;
    toh(n,a,b,c);
}