#include <iostream>
using namespace std;

int main()
{
  int nums[] = {1,22,3,47,5};
  int size = 5;

  int largest = INT32_MIN;

  for (int i = 0; i < size; i++)
  {
    if(nums[i] > largest){
      largest = nums[i];
      }
    }
    // Sort way to write logic
    // largest = max(nums[i], largest);
  }
  cout << "largest = " << largest << endl;
  cout << "index val = " << index << endl;
  
  return 0;
}
