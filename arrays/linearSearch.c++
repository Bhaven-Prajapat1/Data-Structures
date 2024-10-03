#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
  for (int i = 0; i < size; i++){
    if (arr[i] == target){
      return i;
    }
  }
return -1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = 9;
  int target = 5;
  int res = linearSearch(arr, target, size);
  cout << res << endl;
  return 0;
}