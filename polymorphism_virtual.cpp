#include<iostream>
using namespace std;

class Base {
public:
  int var_b;
  virtual void display(){
    cout << "Value of base var: " <<var_b << endl;
  }
};

class Derieved : public Base {
public:
  int var_d;
  void display() {
    cout << "Value of base var: " << var_b << endl;
    cout << "Value of derieved var: " << var_d << endl;
  }
};

int main() {
  cout << "-- Polymorhism using Virtual --" << endl;
  Base obj_b;
  Base * ptr_b;
  Derieved obj_d;
  Derieved * ptr_d;

  ptr_b = &obj_d;
  ptr_d = &obj_d;

  ptr_b->var_b=10;
  ptr_d->var_d=20;
  ptr_b->display();


  return 0;
}
