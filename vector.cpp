// #include<iostream>
// #include<vector>
// #include<map>
// #include <iterator>
// using namespace std;



// // void print(vector<int> a)
// // {
// //     for (auto i = a.begin(); i != a.end(); ++i)
// //     {
// //         cout << *i << " ";
// //     }

// // }

// void frequency(vector<int> a)
// {
//     vector<int> b;
//      map<int, int> g;
//    int k=0;
//     for (auto i = a.begin(); i != a.end(); i++)
//     {
//         int c=0;
//         for(auto j = a.begin(); j != a.end();j++)
//         {
//             if (*i==*j)
//             {
//                 c++;
//             }
//         }
//         b.push_back(c);  
//     }
//      for (auto i = b.begin(); i != b.end(); ++i)
//     {
//         cout << *i << " ";
//     }

//     for(int i=0; i<k; i++)
//     {
//         g.insert(pair<int, int>(a, b));
  
//     }

// }
// int main()
// {
//     vector<int> a;
//     int size,n;

//     cout<<"Enter the size of the array: "; cin>>size;

//     for(int i=1; i<=size; i++)
//     {
//         cin>>n;
//         a.push_back(n);
//     }
//     frequency(a);

// }