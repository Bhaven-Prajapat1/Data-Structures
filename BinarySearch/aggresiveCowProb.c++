#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// This function checks if it is possible to place C cows in stalls such that
// the minimum distance between any two cows is at least `minAllowedDist`
bool isPossible(vector<int> &arr, int N, int C, int minAllowedDist)
{
  // Place the first cow in the first stall
  int cows = 1, lastStallPos = arr[0];

  // Loop through the remaining stalls starting from the second stall
  for (int i = 1; i < N; i++) // Start from 1 (second stall)
  {
    // If the current stall is far enough from the last placed cow
    if (arr[i] - lastStallPos >= minAllowedDist)
    {
      // Place a cow in the current stall
      cows++;
      lastStallPos = arr[i]; // Update the last placed cow's position
    }

    // If we've placed all C cows, return true
    if (cows == C)
      return true;
  }
  // If we couldn't place all cows with the given minimum distance, return false
  return false;
}

// This function returns the largest minimum distance possible between any two cows
int getDistance(vector<int> &arr, int N, int C)
{
  // Step 1: Sort the stalls' positions to perform binary search on distances
  sort(arr.begin(), arr.end());

  // Binary search initialization:
  // `st` is the minimum possible distance (1 unit)
  // `end` is the maximum possible distance (difference between the first and last stalls)
  int st = 1, end = arr[N - 1] - arr[0], ans = -1;

  // Step 2: Binary search to find the maximum minimum distance
  while (st <= end)
  {
    // Calculate the middle distance (midpoint)
    int mid = st + (end - st) / 2;

    // Step 3: Check if it is possible to place C cows with at least `mid` distance apart
    if (isPossible(arr, N, C, mid))
    {
      // If it's possible, save this distance as the answer and try for a larger distance
      ans = mid;
      st = mid + 1; // Move to the right side of the search space (larger distances)
    }
    else
    {
      // If it's not possible, try smaller distances
      end = mid - 1;
    }
  }
  // Step 4: Return the largest found minimum distance
  return ans;
}

int main()
{
  // Number of stalls (N) and number of cows (C) to be placed
  int N = 5, C = 3;

  // Array representing stall positions
  vector<int> arr = {1, 2, 8, 4, 9};

  // Output the maximum minimum distance for placing C cows in N stalls
  cout << getDistance(arr, N, C) << endl;
  return 0;
}
