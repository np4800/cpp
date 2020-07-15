#include<iostream>
using namespace std;

int main(){
  int a=8;
  int* b=&a;
  int** c;
  c=&b;
  cout << "-- Pointers program --" << endl;
  cout << "The address of a is : " << &a << endl;
  cout << "The address of a is using pointer variable b : " << b << endl;
  cout << "The value of the a using pointer variable b : " << *b << endl;
  cout << endl;
  cout << "-- Pointer to Pointer program -- " << endl;
  cout << "The address of b is : " << c << endl;
  cout << "The address of b is using pointer variable c : " << *c << endl;
  cout << "The value of the b using pointer variable c : " << **c << endl;


  return 0;
}
