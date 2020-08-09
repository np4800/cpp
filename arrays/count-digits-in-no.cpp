#include <iostream>
#include <math.h>
using namespace std;

int countDigit(long long n) {
  return floor(log10(n) + 1);
}

int main() {
  long long n = 131;
  cout << "no of digits : " << countDigit(n) << endl; 
  return 0;
}
