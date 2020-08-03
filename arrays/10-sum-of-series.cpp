#include <iostream>
using namespace std;

int sumOfSeries(int x) {
  int sum = 0;
  for (int i=1; i<=x; i++) {
    sum = sum + i;
  }
  return sum;
}

int main() {
  int T;
  int n;
  cin >> T;
  while (T--) {
    cin >>n;
    cout << sumOfSeries(n);
  }
  return 0;
}
