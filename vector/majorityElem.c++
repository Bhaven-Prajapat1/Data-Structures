#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int majorityElem(vector<int> nums){
  // BRUTE FORCE APPROACH TC---> O(n2)
  int n = nums.size();
  // int result;
  // for(int val : nums){
  //   int freq = 0;
  //   for(int elem : nums){
  //     if(val == elem){
  //       freq++;
  //     }
  //   }
  //   if(freq > n/2){
  //     result = val;
  //   }
  // }
  // cout<<"Majority element is: "<<result;


  // Optimised approach


  // sort(nums.begin(), nums.end());
  
  // int freq = 1, ans= nums[0];
  // for (int i = 1; i < n; i++)
  // {
  //   if (nums[i] == nums[i-1])
  //   {
  //     freq++;
  //   }else{
  //     freq = 1;
  //     ans = nums[i];
  //   }
  //   if(freq > n/2){
  //     return nums[i-1];
  //   }
  // }
  // return ans;


  // BY Moores algorithm

        int freq = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (freq == 0) {
                ans = nums[i];  // Set new candidate
            }
            if (nums[i] == ans) {
                freq++;  // Increase count for current candidate
            } else {
                freq--;  // Decrease count if different element
            }
        }

        return ans;
    }
int main()
{
  vector<int> arr = {1,2,2,1,1};
  
  int majority = majorityElem(arr);
  cout<<"Majority elem is :"<<majority;

  
  return 0;
}