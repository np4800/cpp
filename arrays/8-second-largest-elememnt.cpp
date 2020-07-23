#include <iostream>
#include <vector>
using namespace std;


int secondLargest(vector<int> arr, int n) {
  for(int i=0; i<n; i++) {
    int temp=0;
    if (i == n-1) {
      return arr[n-2];
    }
    if (arr[i] > arr[i+1]) {
      temp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = temp;
    }
    // cout << arr[i] << " " << arr[i+1] << endl;
  }
  // return arr[n-2];
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

    cout << secondLargest(arr,N);
    arr.clear();
    cout << endl;
  }
}
