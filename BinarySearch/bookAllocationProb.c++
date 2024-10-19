#include <iostream>
#include <vector>
using namespace std;

// Time complexity of overall code o(log(N) * n)

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
  int student = 1, pages = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > maxAllowedPages)
      return false;

    if (pages + arr[i] <= maxAllowedPages)
    {
      pages += arr[i];
    }
    else
    {
      student++;
      pages = arr[i];
    }
  }
  return student > m ? false : true; // return false if  required students is greater then given student
}
int allocateBooks(vector<int> &arr, int n, int m)
{

  if (m > n)
    return -1; // edge case

  // finding maximum number of pages
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  // Binary search

  int st = 0, end = sum, ans = -1; // range of possible answers
  while (st <= end)
  {
    // find mid
    int mid = st + (end - st) / 2;
    if (isValid(arr, n, m, mid))
    { // left side searching
      ans = mid;
      end = mid - 1;
    }
    else
    { // right side searching
      st = mid + 1;
    }
  }
  return ans;
}
int main()
{
  vector<int> arr = {2, 1, 3, 4};
  int n = 4, m = 2;
  cout << allocateBooks(arr, n, m);
  return 0;
}