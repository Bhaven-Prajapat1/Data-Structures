#include <iostream>
using namespace std;

int binarytodec(int binaryNum){
int ans=0,pow=1;
while (binaryNum > 0)
{
  int rem = binaryNum%10;
  binaryNum /= 10;
  ans += (rem * pow);
  pow *= 2;
}
return ans;
}
int main()
{
// for (int i = 1; i <= 1010; i++)
// {
//   cout << binarytodec(i)<< endl;
// }

cout<<binarytodec(1010);
return 0;
}