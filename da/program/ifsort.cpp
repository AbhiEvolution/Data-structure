#include<iostream>

using namespace std;

int ifsort(int arr[], int n)
{ 
 
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            return -1;

        }
    }
  return 1;
}

int main()
{
  int arr[50];
  int size;
  cout<<"\n================\n";
  cout<<"\nEnter the size of the array: "; cin>>size;
  for(int i=0; i< size; i++)
  {
      cin>>arr[i];
  }
  cout<<ifsort(arr,size);

}