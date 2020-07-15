#include<iostream>
using namespace std;

class Student{
protected:
  int rollNum;
public:
  void setRollNum(int r) {
    rollNum = r;
  }
};

class Test : public virtual Student {
protected:
  float maths;
  float physics;

public:
  void setMarks(float m, float p){
    maths = m;
    physics = p;
  }
};

class Sports : public virtual Student {
protected:
  float score;
public:
  void setScore(float s){
    score = s;
  }
};

class Result : public Test, public Sports {
public:
  void display() {
    cout << "Roll Number : " << rollNum << " is having following resutls " << endl;
    cout << "You have obtained in Maths: " << maths << " and in Physics " << physics << " and PT score is " << score << endl;
    cout << "The Total is : " << maths + physics + score << endl;
  }
};


int main() {
  cout << "-- Virtual Base class --" << endl;
  Result r;
  r.setRollNum(300);
  r.setMarks(40.0,70.0);
  r.setScore(40.9);
  r.display();
  return 0;
}
