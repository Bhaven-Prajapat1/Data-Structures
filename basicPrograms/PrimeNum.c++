#include <iostream>
#include <cmath> // Required for sqrt() function
using namespace std;

int main()
{
  int n = 9;
  bool isPrime = true;

  if (n < 2) {
    isPrime = false;
  } else {
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  if (isPrime == true) {
    cout << "Prime number\n";
  } else {
    cout << "Non Prime\n";
  }

  return 0; // End the program with a return code of 0
}
