#include<iostream>
using namespace std;

class Base1 {
  int data1;
public:
  Base1(int a) {
    data1 = a;
    cout << "Base1 constructor called" << endl;
  }
  void printData1(void) {
    cout << "Tha value of data1 is " << data1 << endl;
  }
};

class Base2 {
  int data2;
public:
  Base2(int b) {
    data2=b;
    cout << "Base2 constructor called" << endl;
  }
  void printDate2(void) {
    cout << "THe valud of data2 is " << data2 << endl;
  }
};

class Derieved : public Base1, public Base2 {
  int d1, d2;
public:
  Derieved(int x, int y, int p, int q): Base1(p), Base2(q) {
    d1=x;
    d2=y;
    cout << "Derieved class called" << endl;
  }
  void printData(void) {
    cout << "THe value of d1 and d2: " << d1 << " and  " << d2 << endl;
  }
};

class Test {
  int a;
  int b;
public:
  /*
  Different syntax variety of Consturctor initializaiton
  Test(int i, int j) : a(i), b(j)
  Test(int i, int j) : a(i), b(i+j)
  Test(int i, int j) : a(i), b(2*j)
  Test(int i, int j) : a(i), b(a+j)
  Test(int i, int j) : b(j), a(i) --> RED FLAG this will create problem as it depends on the order of initialization in the private section as of now seen.
  */
  Test(int i, int j) : a(i), b(j) {
    cout << "Test Contructor called - with new way of initialization ! " << endl;
    cout << "Value of a=" << a << " and b=" << b << endl;
  }
};


int main() {
  cout << "-- Inheritence - Contructor Order of calling --" << endl;
  Derieved d(4,3,1,2);
  Test t(0,0);
  d.printData1();
  d.printDate2();
  d.printData();


  return 0;
}
