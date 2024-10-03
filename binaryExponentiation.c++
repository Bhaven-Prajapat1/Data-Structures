#include <iostream>

using namespace std;

int binaryExponenition(int n, int x){
  int ans = 1;
  if(n == 0) return 1.0;
  if(x == 0) return 0.0;
  if(x == 1) return 1.0;
  if(x == -1 && n%2 == 0) return 1.0;
  if(x == -1 && n%2 != 0) return -1.0;
  while (n > 0)
  {
    if(n % 2 == 1){
      ans = ans * x;
    }
    x = x * x;
    n = n/2;
  }
  return ans;
}

int main() {
    int n = 5, x = 1;
    int result = binaryExponenition(n,x);
    cout<< "Result: "<<result;
    return 0;
}