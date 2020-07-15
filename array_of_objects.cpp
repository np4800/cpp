#include<iostream>
using namespace std;

class Employee {
  int id;
  int salary;
public:
  void setData(void) {
    cout << "Enter the Employee id: ";
    cin >> id;
  };

  void getData(void) {
    cout << "Value of id entered is: " << id << endl;
  };
};


int main() {
  cout << "--  Array of objects and passing objects as function arguments --" <<  endl;
  Employee fb[4];
  for (int i=0; i<4; i++)
  {
    fb[i].setData();
    fb[i].getData();
  }
  return 0;
}
