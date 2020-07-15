#include<iostream>
#include<math.h>
using namespace std;

#define PI 3.14

class SimpleCalc {
  int _a;
  int _b;
public:
  void setNum(int a, int b) {
    _a = a;
    _b = b;
  }

  int sum() {
    return (_a + _b);
  }

  int subtract() {
    return (_a - _b);
  }

  int multiply() {
    return (_a * _b);
  }

  float div() {
    return (_a/_b);
  }

};

class ScientificCalc {
protected:
  double _c;
public:
  void setSCNum(double c) {
    _c = c;
  }

  double sinof() {
    return sin(_c*PI/180);
  }

  double cosof() {
    return cos(_c*PI/180.0);
  }

  double tanof() {
    return tan(_c * PI / 180);
  }
};

class HybridCalc : public SimpleCalc, public ScientificCalc {
public:
  void show() {
    cout << "Addition of a & b is: " << sum() << endl;
    cout << "Substraction is: " << subtract() << endl;
    cout << "Multiply is: " << multiply() << endl;
    cout << "Division is: " << div() << endl;
    cout << "Sin of _a " << _c << " is " << sinof() << endl;
    cout << "Cos of _a " << _c << " is " << cosof() << endl;
    cout << "Tan of _a " << _c << " is " << cosof() << endl;
  }

};


int main() {
  cout << "-- Calculator using inheritence --" << endl;
  HybridCalc h1;
  h1.setNum(20,10);
  h1.setSCNum(30.00);
  h1.show();
  return 0;
}
