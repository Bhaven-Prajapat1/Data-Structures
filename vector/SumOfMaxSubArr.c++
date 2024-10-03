#include <iostream>
using namespace std;

int main()
{
  int arr[]={1,2,3,4,5}; // BRUTE FORCE APPROACH
  int n=5;
  int maxSum = INT32_MIN;
  for (int start = 0; start < n; start++)
  {
    int  currSum = 0;
    for (int end = start; end < n; end++)
    {
      currSum += arr[end];
      maxSum = max(currSum,maxSum);
    }
  }
    cout<<"Max subArray:"<<maxSum;
  

  // Optimised way


//         for(int val : nums)
// {
//             currSum += val;
//             maxSum = max(currSum,maxSum); // kadans algorithym

//             if(currSum < 0)
//             {
//                 currSum = 0;
//             }
//  }
  return 0;
}