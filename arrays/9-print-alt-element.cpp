#include <iostream>
#include <vector>
using namespace std;

vector<int> printAltElement(vector<int> arr, int n) {
  vector<int> brr;

  for (int i=0; i<n; i++) {
    if (i % 2 == 0) {
      brr.push_back(arr[i]);
    }

  }
  return brr;
}

int main() {
  int T;
  int N;
  int value;
  vector<int> arr;
  vector<int> brr;

  cin >> T;
  while(T--) {
    cin >> N;

    for (int i=0; i<N; i++) {
      cin >> value;
      arr.push_back(value);
    }
    brr = printAltElement(arr,N);
    for (int j=0; j<brr.size(); j++) {
      cout << brr[j] << " ";
    }
    arr.clear();
    brr.clear();
    cout << endl;
  }
  return 0;
}
