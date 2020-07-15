#include<iostream>
using namespace std;

int sum(int,int); // Declared the function first and then it can be implemented after main function - since compile will know that there is some function named 'sum' that will id defined somewhere in the program

int main() {
  int n1,n2;
  cout << "-- Functions & Prototyping --" << endl;
  cout << "Enter n1: ";
  cin >> n1;
  // cout << endl;
  cout << "Enter n2: ";
  cin >> n2;
  // Here the n1,n2 are call the actual parameters - that we physically get from the user or hardcode the value and these values are consumed by formal parameters that input parameters of the sum function namely (a,b)
  int _getsum = sum(n1,n2); //(n1,n2) are called the actual parameters
  cout << "The sum is: " << _getsum << endl;
  return 0;
}

int sum(int a, int b) { // (a,b) are called the formal parameters
  return a+b;
}
