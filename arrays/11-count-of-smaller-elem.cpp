#include <iostream>
#include <vector>
using namespace std;

int getCount(vector<int> arr, int n, int x) {
  int counter = 0;
  for (int i=0; i<n; i++) {
    if (arr[i] <= x) {
      counter++;
    }
  }
  return counter;
}

int main() {
  int T;
  int value;
  int N;
  vector<int> arr;
  int x;

  cin >> T;
  while(T--) {
    cin >> N;
    for (int i=0; i<N; i++) {
      cin >> value;
      arr.push_back(value);
    }
    cin >> x;
    cout << getCount(arr,N,x);
    arr.clear();
  }

  return 0;
}
