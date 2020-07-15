#include<iostream>
#include<string>

using namespace std;

/*
Notes:

Base / Derieved     Public Derivation   Private Derivattion   Protected Derivattion
------------------------------------------------------------------------------------
Private members      Not Inherited       Not Inherited         Not Inherited
Protected memebers   protected           Private               Protected
Public members       Public              Private               Protected

*/


class Base {
protected:
  int a;
private:
  int b;
};

class Derieved : protected Base {
public:
  void setData() {
    a = 10;
  }
  void getData() {
    cout << "Protected member a: " << a << endl;
  }
};

int main() {
  Derieved d1;
  d1.setData();
  d1.getData();
  cout << "Access protected memeber of base class via derieved class: " << d1.a << endl; // Cannot access the protected members it can only be inherited. - so this will fail.
  return 0;
}
