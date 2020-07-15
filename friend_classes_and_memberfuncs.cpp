#include<iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator {
public:
  int sumRealNum(Complex, Complex);
};

class Complex {
  int a, b;
public:
  // This is individually declaring function as friend
  // friend int Calculator :: sumRealNum(Complex o1, Complex o2);

  // This will create whole class as a friend
  friend class Calculator;
  void setNum(int n1, int n2) {
    a = n1;
    b = n2;
  };
  void getNum() {
    cout << "The value of real part is: " << a << " and iota is " << b << endl;
  };
};

int Calculator :: sumRealNum(Complex o1, Complex o2) {
  return (o1.a + o2.a);
};

int main() {
  cout << "-- Friend classes and Member functions --" << endl;
  Complex c1, c2;
  Calculator calc;
  int result;

  c1.setNum(1,2);
  c1.getNum();
  c2.setNum(5,6);
  c2.getNum();

  result = calc.sumRealNum(c1,c2);
  cout << "The sum of the real part of complex number is: " << result << endl;


  return 0;
}
