#include<iostream>
#include<string>
using namespace std;

// Forward declration
class Y;
class X {
  int data;
public:
  void setValue(int value) {
    data = value;
  }
  friend void add(X,Y);

};

class Y {
  int num;
public:

  void setValue(int value) {
    num = value;
  }
  friend void add(X,Y);
};

// Example swap
class John;
class Nikhil {
  string _gf1;

public:
  void setGf(string value) {
    _gf1 = value;
  }
  void display() {
    cout << "Nikhil's girlfried is " << _gf1 << endl;
  }
  friend void exchange_gfs(Nikhil &n, John &j);
};

class John {
  string _gf2;
  public:
    void setGf(string value) {
      _gf2 = value;
    }
    void display() {
      cout << "John's girlfriend is: " << _gf2 << endl;
    }
    friend void exchange_gfs(Nikhil &n, John &j);

};

void exchange_gfs(Nikhil &n, John &j) {
  string temp;
  temp = n._gf1;
  n._gf1 = j._gf2;
  j._gf2 = temp;
};


void add(X x1, Y y1) {
  cout << "The valud of X is " << x1.data << " and value of Y is " << y1.num << " and their sum is " << x1.data+y1.num << endl;
}


int main() {
  cout << "-- More on Friends function and class --" << endl;
  X a1;
  Y b1;
  a1.setValue(4);
  b1.setValue(5);
  add(a1,b1);

  cout << "-- Complex example of friend function --" << endl;
  Nikhil n1;
  John j1;
  n1.setGf("Juliana");
  j1.setGf("Cari");
  exchange_gfs(n1,j1);
  n1.display();
  j1.display();


  return 0;
}
