#include<iostream>
using namespace std;

class Complex {
  int real, imaginary;
public:
  void getData(void) {
    cout << "Real Value=" << real << endl;
    cout << "Imaginary value=" << imaginary << endl;
  }
  void setData(int r, int i) {
    real = r;
    imaginary = i;
  }
};

int main() {
  cout << "-- Pointer Revisit --" << endl;
  int a=4;
  int* ptr = &a;
  cout << "Basic Pointer Example: The address of a is [" << ptr << "] and value of a is using *(ptr)= " << *(ptr) << endl;
  int* arr = new int[3];
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  // delete [] arr; deleting the pointer
  cout << "new Operator Example: The address of arr[0] [" << arr << "] and value of arr[0] " << *(arr) << endl;
  cout << "new Operator Example: The address of arr[1] [" << arr+1 << "] and value of arr[1] " << *(arr+1) << endl;
  cout << "new Operator Example: The address of arr[2] [" << arr+2 << "] and value of arr[2] " << *(arr+2) << endl;

  Complex c;
  Complex *ptr1 = &c;

  c.setData(40,50);
  c.getData();

  (*ptr1).setData(30,10);
  (*ptr1).getData();

  ptr1->setData(1,2);
  ptr1->getData();

  return 0;
}
