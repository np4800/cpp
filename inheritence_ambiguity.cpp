#include<iostream>
using namespace std;

class Base1 {
public:
  void say() {
    cout << "Hello how are you?" << endl;
  }
};

class Base2 {
public:
  void say() {
    cout << "wir gehts " << endl;
  }
};

class Derieved : public Base1, public Base2 {
public:
  void say() {
    Base2 :: say();
  }
};

int main() {
  cout << "-- Resolving Ambguity whilst Inheritence --" << endl;
  Derieved d1;
  d1.say();
  return 0;
}
