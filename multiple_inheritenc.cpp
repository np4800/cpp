#include<iostream>
#include<string>
using namespace std;

class Base1 {
protected:
  int _a;
public:
  void setBase1(int a) {
    _a = a;
  }
};

class Base2 {
protected:
  int _b;
public:
  void setBase2(int b) {
    _b = b;
  }
};

class Derieved : public Base1, public Base2 {
protected:
  string greet="hello";
public:
  void show() {
    cout << "We have derieved the 2 base class here" << endl;
    cout << "Value of a is: " << _a << " and value of _b in Base2 is: " << _b << endl;
    cout << "Sum of base1 class's _a + base2 class's _b is : " << _a + _b << endl;
    cout << "Printing protected value of Derived class greet: " << greet << endl;
  }
};


int main() {
  cout << "-- Multiple Inheritence --" << endl;
  Derieved d1;
  d1.setBase1(23);
  d1.setBase2(27);
  d1.show();
  return 0;
}
