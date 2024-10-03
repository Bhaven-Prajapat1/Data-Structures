#include <iostream>
using namespace std;

int main()
{
  int nums[] = {55,1,52,3,4,-5,-63};
  int size = 7;

  int smallest = INT32_MAX;

  for (int i = 0; i < size; i++)
  {
    if(nums[i]<smallest){
      smallest  = nums[i];
    }
    //Sortr way to write logic
    // smallest = min(nums[i], smallest);

  }
  cout<<"Smallest = "<< smallest <<endl;
  
  return 0;
}