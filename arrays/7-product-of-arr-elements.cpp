#include <iostream>
#include <vector>
using namespace std;

int findProduct(vector<int> arr, int n) {
  int prod=1;
  for (int i=0; i<n; i++) {
    prod = prod * arr[i];
  }

  return prod;
}


int main() {
  int T;
  int N;
  int value;
  vector<int> arr;

  cin >> T;

  while (T--) {
    cin >> N;
    for (int i=0; i<N; i++) {
      cin >> value;
      arr.push_back(value);
    }

    cout << findProduct(arr,N);
    arr.clear();
    cout << endl;

  }

  return 0;
}
