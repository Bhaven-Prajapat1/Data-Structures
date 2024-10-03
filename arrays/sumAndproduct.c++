#include <iostream>
using namespace std;

int sumOfarrays(int arr[], int size) {
int sum = 0;
int product = 1;
for (int i = 0; i < size; i++)
{
  sum +=arr[i];
  product *=arr[i];
}
cout<<"product :"<<product;
return sum;
}
int main()
{
  int arr[]={1,2,3,4,5};
  int size=5;
  cout<<endl<<sumOfarrays(arr,size);
  return 0;
}