#include<iostream>
using namespace std;

class Employee {
  int id;
  static int counter;
public:
  void setEmpId(void);
  void getEmpId(void);
  static void getCount(void) {
    // cout << id;  THis will thow error while accessing non-static variable
    cout << "Value of counter: " << counter << endl;
  }
};

int Employee :: counter;
void Employee :: setEmpId(void) {
  cout << "Enter the employee id: ";
  cin >> id;
  counter++;
};

void Employee :: getEmpId(void) {
  cout << "Employee Id is: "<< id << endl;
};

int main() {
  cout << "-- Static Variable and Member function --" << endl;
  Employee nikhil, juliana, cari;
  nikhil.setEmpId();
  nikhil.getEmpId();
  Employee :: getCount();

  juliana.setEmpId();
  juliana.getEmpId();
  Employee :: getCount();

  cari.setEmpId();
  cari.getEmpId();
  Employee :: getCount();
  return 0;
}
