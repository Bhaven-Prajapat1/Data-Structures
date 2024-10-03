#include<iostream>
using namespace std;

int sumN(int n){
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
  sum += i;
  }
  return sum;
}

int main(){
  cout << "sum of num: "<< sumN(5) << endl;
}