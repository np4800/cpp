#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
  orange <-- maxlen   arr[0]
  Pineapple
  appleee  <--        arr[1]=maxlen
  chikoo              arr[2]
  i=0 maxlen=arr[i] > arr[i+1].len()

*/

string findlongstr(vector<string> fruits_name, int n) {
  int maxlen=0;
  int indexOfmaxlen=0;
  string longestStr;

  for (int i=0; i<n; i++) {
    if (fruits_name[i].length() > maxlen) {
      // cout << fruits_name[i] << " " << fruits_name[i].length() << endl;
      maxlen = fruits_name[i].length();
      longestStr = fruits_name[i];
    }
  }
  return longestStr;
}

int main() {
  vector<string> fruits;
  int T;
  cin >> T;
  while (T--) {
    // string arr[5] = {"Orange","Pineaple", "Apple","Pomogrenete", "Chikoo" };
    int n;
    string fruit_name;

    cin >> n;

    for(int i=0; i<n; i++) {
      cin >> fruit_name;
      fruits.push_back(fruit_name);
    }

    cout << findlongstr(fruits,n) << endl;
    fruits.clear();
  }
  return 0;
}
