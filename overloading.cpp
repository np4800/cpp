#include<iostream>
using namespace std;

int sum(int a, int b) {
  return a+b;
}

int sum(int a, int b, int c) {
  return a+b+c;
}

int main() {
  cout << "-- Function Overloading Topic --" << endl;
  cout << "Sum with 2 arguments: "<<sum(4,5) <<endl;
  cout << "Sum with 3 arguments: "<<sum(4,5,9) <<endl;
  return 0;
}
