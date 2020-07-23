#include <iostream>
#include <vector>
using namespace std;

int findelement(vector<int> arr, int x) {
  return arr[x];
}

int main() {
  int T;
  int N;
  int I;
  int value;
  vector<int> arr;

  cin >> T;
  while(T--) {
    cin >> N;
    cin >> I;
    for (int i=0; i<N; i++) {
      cin >> value;
      arr.push_back(value);
    }
    cout << findelement(arr,I);
    arr.clear();
    cout << endl;
  };
  // cout << T;

  return 0;
}
