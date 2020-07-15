#include<iostream>
using namespace std;

int main() {
  int a[] = {45,42,66,77};
  int* p = a;
  cout << "Getting the project" << endl;
  cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << endl;
  cout << "Length of array : "<< sizeof(a)/sizeof(a[0]);
  cout << endl;

  cout << "The value of *p is : " << *p << endl;
  cout << "The value of *p+1 is : " << *(p+1)<<endl;
  cout << "The value of *p+2 is : " << *(p+2)<<endl; //Deference of the pointer is denoted by *p
  cout << "The value of *p+3 is : " << *(p+3)<<endl;

  cout << *(p++) << endl; // This will print the value of pointer where it is currently pointing to and then it will increment by 1 due ++
  cout << *p << endl; // This will print 2nd element since the pointer had advanced by 1 in above step - though above prints the 1st value.
  cout << *(++p) << endl; //This will first increment the pointer by one and then print the value of pointer by dereferenced pointer mechanism

  return 0;
}
