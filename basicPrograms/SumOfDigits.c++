#include<iostream>
using namespace std;

int sumOfDig(int num){
  int digSum = 0;
  while (num > 0) {
    int lastDig = num % 10; // Get the last digit
    num = num / 10;         // Remove the last digit from num
    digSum += lastDig;      // Add the last digit to digSum
  }
  return digSum;            // Return the sum of digits
}

int main(){
  cout << "Sum is " << sumOfDig(1542); // Output the result
  return 0;
}
