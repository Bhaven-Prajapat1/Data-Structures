#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{
  int painter = 1, time = 0;
  // iterate
  for (int i = 0; i < n; i++)// o(n)
  {
    // check if the curr painter can paint currboard
    if (time + arr[i] <= maxAllowedTime)
    {
      time += arr[i];// adding curr time val 
    }
    else
    {
      painter++;// increase the limit of the painters
      time = arr[i];// reiniatilize the time val
    }
  }
  return painter<=m;
}

int minTimetoPaint(vector<int> &arr, int n, int m)
{
  // find sum and max value of an arr
  int sum = 0, maxValue = INT32_MIN;
  for (int i = 0; i < n; i++) // o(n)
  {
    sum += arr[i];
    maxValue = max(maxValue, arr[i]);
  }

  // Binary search and initialisation
  int st = maxValue, end = sum, ans = -1;
  while (st <= end) // 0(log(sum) * n)
  {
    // find mid first
    int mid = st + (end - st) / 2;

    // check mid is possible ans or not
    if (isPossible(arr, n, m, mid))
    {            // iif not search in left half
      ans = mid; // inialize mid as an ans if is it posible
      end = mid - 1;
    }
    else
    { // search in right half
      st = mid + 1;
    }
  }
}

int main()
{
  vector<int> arr = {40, 30, 10, 20};
  int n = 4, m = 2;
  cout << minTimetoPaint(arr, n, m);
  return 0;
}