#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;
  cout<<"Size = "<<vec.size()<<endl;

  for(int val : vec){
    cout<< val << endl;
  }
  return 0;
}