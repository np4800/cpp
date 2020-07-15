#include<iostream>
using namespace std;

int main() {
  typedef struct employee {
    int eId;
    char favChar;
    float salary;
  } emp;

  union money {
    int rice;
    char car;
    float currency;
  };

  enum Meals{ breakfast, lunch, dinner };

  cout << "-- Struct --" << endl;
  struct employee juliana;
  emp john;

  juliana.eId = 101;
  juliana.favChar = 'F';
  juliana.salary = 55000.99;

  john.eId = 102;
  john.favChar = 'C';
  john.salary = 2929.80;
  cout << "The value is " << juliana.eId << endl;
  cout << "The value is " << juliana.favChar << endl;
  cout << "The value is " << juliana.salary << endl;

  cout << "The values for John is " << john.eId << endl;
  cout << "The values for John is " << john.favChar << endl;
  cout << "The values for John is " << john.salary << endl;

  cout << endl;

  cout << "-- Union -- " << endl;
  money m1;
  m1.rice = 1;
  cout << "Value of rice is : " << m1.rice << " kg" << endl;
  m1.car = 'C'; // We are overwritting the value at the memory location wherever uinon is defined as it will allocation the hightest bytes from the list of union datatypes
  cout << "Prints garbage value, since union can enable only one datatype/variable at time for memory management : " << m1.rice << " kg" << endl;
  cout << "Value of car is : " << m1.car << endl;

  cout << endl;
  
  cout << "-- enum --" << endl;
  Meals m2 = lunch;
  cout << "The value of Meals " << m2 << endl;

  return 0;
}
