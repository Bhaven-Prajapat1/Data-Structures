#include <iostream>
#include <vector>

using namespace std;
int stockBuyandSell(const vector<int>& nums){
  int maxProfit = 0, bestBuy = nums[0];
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] > bestBuy)
    {
      maxProfit = max(maxProfit, nums[i]-bestBuy);
    }
    bestBuy = min(bestBuy, nums[i]);
  }
  return maxProfit;
}
int main() {
  vector<int> nums = {7,1,5,3,6,4};
    cout << stockBuyandSell(nums) << endl;
    return 0;
}