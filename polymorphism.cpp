#include<iostream>
using namespace std;

/*
  Polymorphism are of two types
  1. Complile time polymorhpism
    1.1 Function Overloading (Early Binding means that during the compilation descision is taken which function will run)
    1.2 Operator Overloading (Early Binding)
  2. Run time polymorhpism
    2.1 Virtual Functions (Late Binding : Compiler postpones the decision of binding the function till the end to execute which function)
*/


class Base {
public:
  int var_base;
  void display() {
    cout << "Value of var_base - under Base Class : " << var_base << endl;
  }
};

class Derieved : public Base {
public:
  int var_d;
  void display() {
    cout << "Value of var_base - under derieved class: " << var_base << endl;
    cout << "Value of var_d - under derieved class: " << var_d << endl;
  }
};


int main() {
  cout << "-- Polymorphism --" << endl;
  Base * ptr_base;
  Base obj_base;

  Derieved * ptr_d;
  Derieved obj_d;

  ptr_base = &obj_d;
  ptr_d = &obj_d;

  ptr_base->var_base=50;
  ptr_base->display();

  ptr_d->var_base=100;
  ptr_d->var_d=110;

  ptr_d->display();


  return 0;
}
