#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
  int rollNumber;
public:
  void setRollNumber(int);
  void getRollNuber();
};

void Student :: setRollNumber(int r) {
  rollNumber = r;
}
void Student :: getRollNuber() {
  cout << "Student's roll number: " << rollNumber << endl;
}

class Exam : public Student {
protected:
  float maths;
  float physics;

public:
  void setMarks(float,float);
  void getMarks();
};

void Exam :: setMarks(float m1, float m2) {
  maths = m1;
  physics = m2;
}

void Exam :: getMarks() {
  cout << "Marks Obtained in maths: " << maths << " and in pyhsics " << physics << endl;
}

class Result : public Exam {
  float percentage;
public:
  void display(){
    percentage=(maths+physics)/2;
    cout << "Resultant Percentage: " << percentage << endl;
  }
};

/*
  Notes:
    If we are inheriting B from A and C from B: [A --> B --> C] then:
    - A is base class of B and B is base class C
    - A --> B --> C is called the inheritence path

*/

int main() {
  cout << "-- Multilevel Inheritence --" << endl;
  Result nik;
  nik.setRollNumber(10);
  nik.getRollNuber();
  nik.setMarks(90.4,90.5);
  nik.getMarks();
  nik.display();
  return 0;
}
