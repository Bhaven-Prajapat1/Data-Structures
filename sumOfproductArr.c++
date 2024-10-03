#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> ans;
  
  for (int i = 0; i < nums.size(); i++)
  {
    int product = 1;  // Initialize the product as 1 for each i
    for (int j = 0; j < nums.size(); j++)
    {
      if (i != j)  // Skip the current element
      {
        product *= nums[j];  // Multiply the current product
      }
    }
    ans.push_back(product);  // Store the product for this i in ans
  }

  // Output the result
  for (int val : ans)
  {
    cout << val << " ";
  }
  
  return 0;
}
