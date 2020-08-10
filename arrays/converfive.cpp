#include <iostream>
#include <string>
using namespace std;

void converFive(string a[], int n) {
  string item;
  cout << "Convert Five" << endl;
  for (int i=0; i<n; i++ ){
    item=a[i];
    for(int j=0; j<item.length(); j++)
    {
      if (item[j] == '0')
      {
        item[j]='5';
      }
      cout << item[j];
    }
    cout << endl;
  }
};

int main() {
  int N;
  string a[2];
  cout << "Convert all occurance of 0s to 5s in a given number --" << endl;
  cout << "Input numbers: ";
  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> a[i];
  }


  // cout << a[0] << "  " << a[1] << endl;
  converFive(a,N);

  return 0;
}
