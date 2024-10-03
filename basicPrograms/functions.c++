#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//   return a + b;
// }
int miniMum(int a, int b)
{
  if (a < b)
  {
    return a;
  }
  else
  {
    return b;
  }
}
int main(){
  cout << miniMum(3,2) << endl;
}