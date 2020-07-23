#include<iostream>
#include<math.h>
using namespace std;

int convert0to5(int n) {
  // cout << n%10 << " " << n;
  if (n == 0) {
    return 0;
  }
  int digit = n%10;
  if (digit == 0) {
    digit=5;
  }

  return convert0to5(n/10)*10 +digit;
}


int main() {
  int num=10120;
  cout << convert0to5(num);
  return 0;
}
