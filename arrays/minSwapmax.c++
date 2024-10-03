#include <iostream>
using namespace std;

int swapMaxMin(int arr[], int size)
{
  // need to sort fist
  int maxValue = arr[0], minValue = arr[0];
  int maxIdx = 0, minIdx = 0;
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > maxValue)
    {
      maxValue = arr[i];
      maxIdx = i;
    }
    if (arr[i] < minValue)
    {
      minValue = arr[i];
      minIdx = i;
    }
  }

  int tem = arr[maxIdx];
  arr[maxIdx] = arr[minIdx];
  arr[minIdx] = tem;

  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  
  // cout << "Max value :" << maxValue << endl;
  // cout << "Max index :" << maxIdx << endl;

  // cout << "Min value :" << minValue << endl;
  // cout << "Min index :" << minIdx << endl;
}
int main()
{
  int arr[] = {3, 4, 2, 1, 5, 8, 6};
  int size = 7;
  swapMaxMin(arr, size);
  return 0;
}