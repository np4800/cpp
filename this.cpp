#include<iostream>
using namespace std;

class A {
  int a;
  int b;
public:
  void setItem(int a) {
    this->a = a;  // 'this'  is a keyword which is a pointer which points to the object which invokes the member function.
  }
  void getItem() {
    cout << "Value of a is: " << a << endl;
  }

  A & setItem2(int b) {
    this->b = b;
  }

  void getItem2() {
    cout << "Value of b: " << b << endl;
  }

};

int main() {
  cout << "-- 'this' as the pointer to the object --" << endl;
  A a,b;
  a.setItem(4);
  a.getItem();
  b.setItem2(5).getItem2();


  return 0;
}
