#include <iostream>

using namespace std;

// void secondMax(int arr[], int size)
// {
//     int max=0;
//     int secondMax=-1;

//     if(size<2)
//     {
//         cout<<"Second largest element is not found in array"<< endl;
//         return;
//     }
   
//     for (int i = 1; i < size; i++)
//     {
//       if (arr[i] > max)
//       {
//           max = arr[i];
//       }
//     }
//     cout<<max<<endl;

// }

void secondMax(int arr[], int size)
{
    int res=-1,largest=0;

    for (int i=1; i<size; i++)
    {
        if (arr[i] > arr[largest])
        {
            res=largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if(res == -1 ||arr[i] != arr[res])
            {
                res=i;
            } 
        }
    }
    cout<<arr[largest]<< " "<<arr[res];
}

int main()
{
    int arr[100], size, r;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    secondMax(arr, size);
    cout << endl;
}