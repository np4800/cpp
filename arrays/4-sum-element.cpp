#include<iostream>
using namespace std;


int sumofelement(int n, int arr[]) {
  // int x=sizeof(arr)/sizeof(arr[0]);
  int sum = 0;
  for (int i=0; i<n; i++) {
    sum = sum + arr[i];
  }
  return sum;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    int arr[] = {};
    // cout << sizeof(arr) << endl;
    // cout << T << endl;
    cin>>n;
    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }
    cout<<sumofelement(n,arr)<<endl;
  }
  return 0;
}
