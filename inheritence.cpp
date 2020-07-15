#include<iostream>
#include<string>
using namespace std;


// Base Class
class Employee {
public:
  int _id;
  float _salary;
  Employee(void) {
    _id = 1;
    _salary = 34.5;
  };
  void getEmpData() {
    cout << "Empolyee ID: " << _id << " and salary is: " << _salary << endl;
  }
};

/*
  Important Notes:
    2. By default the visiblilty mode of base class is private for the derieved Class
    3. Private members of base class cannot be inherited by derieved class.
    1. Public member of the Base Class becomes public if the visibility mode is public
    4. Public members of base class becomes private members of derieved class if the visibility mode = Private
*/

//Derieved Class from Base Class Employee
class Programmer : Employee {
  string _language;
public:
  Programmer(void) {
    _language = "Java";
  }
  void getData(void) {
    cout << "Empolyee ID: " << _id << " and salary is: " << _salary << endl;
    cout << "Employee's preferred language is: " << _language << endl;
  }
};

int main() {
  cout << "-- Inheritence Topic --" << endl;
  Programmer p1;
  p1.getData();

  return 0;
}
