/*
Properties  of Friend Functions:
1. Not in the scope of class
2. Since it is not in scope of class - therefore, it cannot be called from object of that class. c1.sumComplex() -- is wrong
3. Can be invoked independently
4. Usually contains objects are the parameter to that friend function
5. Can be declared in public or private section in the class body.
6. It cannot access the members directly by thier names and need <object_name>.<member_name> to access any member.
*/


#include<iostream>
using namespace std;

class Complex {
  int a, b;
public:
  void setNum(int n1, int n2) {
    a = n1;
    b = n2;
  };

  friend Complex sumComplex(Complex o1, Complex o2);
  void getNum(void) {
    cout << "Your number is: " << a << "+" << b <<"i" << endl;
  };
};

Complex sumComplex(Complex o1, Complex o2) {
  Complex o3;
  o3.setNum((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main() {
  cout << "-- Friend Functions --" << endl;
  Complex c1, c2, sum;
  c1.setNum(1,2);
  c1.getNum();
  c2.setNum(5,8);
  c2.getNum();

  sum = sumComplex(c1,c2);
  sum.getNum();

  return 0;
}
