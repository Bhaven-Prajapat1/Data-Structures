#include <iostream>
using namespace std;

int main()
{
  // int n = 4;
  // for (int i = 1; i <= n; i++)
  // {
  //   for (int i = 1; i <= n; i++)
  //   {
  //     cout << j << +" ";
  //   }
  // cout << endl;
  // }
  /*
  1234
  1234
  1234
  1234
  */



// A B C D 
// A B C D
// A B C D
// A B C D

// int n=4;
// for (int i = 0; i < n; i++)
// {
// char ch = 'A';
//   for (int j = 0; j < n; j++)
//   {
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<< endl;
// }




// 10 11 12 13 
// 14 15 16 17
// 18 19 20 21
// 22 23 24 25

// int n=3;
// int num=1;
// for (int i = 0; i < n; i++)
// {
//   for (int j = 0; j < n; j++)
//   {
//     cout<<num<<" ";
//     num++;
//   }
//   cout<< endl;
// }



// A B C 
// D E F
// G H I
// int n=3;
// char ch = 'A';
// for (int i = 0; i < n; i++)
// {
//   for (int j = 0; j < n; j++)
//   {
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<<endl;
// }

int n=5;
for (int i = 0; i < n; i++)
{
  for (int j = 0; j < i+1; j++)
  {
    cout<<"* ";
  }
  cout<< endl;
}



  return 0;
}
