#include<iostream>
using namespace std;

void swap(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapPointer(int* a, int* b) {
  cout << "Call by reference using pointers " << endl;
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swapReferenceVar(int &a, int &b) {
  cout << "Call by reference using reference"
  int temp = a;
  a = b;
  b = temp;

}

int main() {
  cout << "-- call by reference & value --" << endl;
  int a = 4;
  int b = 5;

  cout << "Value of a "<< a << " and value of b " << b << " before swap" << endl;
  swap(a,b); //sending the copy of the value in the variables a & b, this will not swap a & b
  cout << "Value of a "<< a << " and value of b " << b << " after  swap" << endl;
  cout << "The value of a and b will not get swapped because - in function swap() - we are sending the copy of value to it. Therefore the scope of the function will limit to itself." << endl;

  cout << "Value of a "<< a << " and value of b " << b << " before swap" << endl;
  swapPointer(&a,&b); //Sending the reference/memory address of the a & b, this will swap a & b with the help of pointers
  cout << "The value of a and b will not get swapped because - in function swapPointer() - we are sending the address of the variables. Therefore the function swapPointer will swap the address of the variables resulting in swap of the values a & b" << endl;
  cout << "Value of a "<< a << " and value of b " << b << " after  swap" << endl;

  cout << "Value of a "<< a << " and value of b " << b << " before swap" << endl;
  swapReferenceVar(a,b); //This will swap a & b using reference variables
  cout << "Sinc in swapPointer we swapped the memory address - this function swapRefernceVal will bring back to original values by swapping it using reference variables" << endl;
  cout << "Value of a "<< a << " and value of b " << b << " after  swap" << endl;

  return 0;
}
