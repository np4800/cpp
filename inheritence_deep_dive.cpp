#include<iostream>
#include<string>

using namespace std;

//classes
class Base {
  int data1; //private variable cannot be inherited
public:
  int data2; //public variable it can be inherited
  void setData(void);
  int getData1();
  int getData2();
};

class Derieved : public Base {
  int data3=0;
public:
  void process();
  void display();
};

//constructor

//functions
void Base :: setData(void) {
  data1 = 10;
  data2 = 20;
}

int Base :: getData1() {
  return data1;
}

int Base :: getData2() {
  return data2;
}

void Derieved :: process() {
  data3 = data2 * getData1();
}

void Derieved :: display() {
  cout << "Value of data1 is : " << getData1() << endl;
  cout << "Value of data2 is : " << data2 << endl;
  cout << "Value of data3 is : " << data3 << endl;
}

int main(void) {
  cout << "-- Inheritence Deep Dive --" << endl;
  cout << "Calling Derieved class itself -- " << endl;
  // Base b1;
  // b1.setData();
  // cout << b1.getData1() << " - " << b1.getData2() << endl;

  Derieved d1;

  d1.setData();
  d1.process();
  d1.display();

  return 0;
}
