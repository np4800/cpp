#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

//Global Variable
int _glCount=0;

// Class Declaration
class Complex {
  int _a, _b;
public:
  Complex(void);
  void getData(void) {
    cout << BOLDYELLOW "Values are " << _a << " und " << _b << RESET << std::endl << endl;
  }
};

class Myclass {
  string _gf;
public:
  Myclass(string _gf);
  void getData(void) {
    cout << BOLDYELLOW "My girl friend is " << _gf  << RESET << std::endl << endl;
  }
};

class Point {
  int _x, _y;
public:
  Point(int x, int y);

  void getData(void) {
    cout << BOLDYELLOW "Point is (" << _x <<"," << _y << ")" << endl << endl;
  }
  friend int distance(Point p, Point q);
};

class Simple{
  string _gf1, _gf2;
public:
  Simple(string gf1, string gf2="Juliana") {
    _gf1 = gf1;
    _gf2 = gf2;
  }
  void getData(void) {
    cout << "My gfs are " << _gf1 << " und " << _gf2 << endl;
  }
};

class Bank {
  int _principal;
  int _years;
  float _rate;
  float _rvalue;
public:
  Bank(){};
  Bank(int p, int y, float r);
  Bank(int p, int y, int r);
  void getData(void);
};

class Number {
  int _a;
public:
  Number(void) {
    _a = 0;
  }
  Number(int a) {
    _a = a;
  }
  Number(Number &obj) {
    cout << "Copy Constructor called" << endl;
    _a = obj._a;
  }
  void getData(void) {
    cout << "The value of a is: " << _a << endl;
  }
};

class Num{
public:
  Num(void) {
    _glCount++;
    cout << "The count of _glCount is: " << _glCount << endl;
  }

  ~Num() {
    _glCount--;
    cout << "Destructor called: " << _glCount << endl;

  }
};

//Contructor body
Point :: Point(int x, int y){
  _x = x;
  _y = y;
}

Complex :: Complex(void) {
  _a = 10;
  _b = 20;
}

Myclass :: Myclass(string gfname) {
  _gf = gfname;
}

Bank :: Bank(int p, int y, float r) {
  _principal = p;
  _years = y;
  _rate = r;
  _rvalue = _principal;

  for(int i=0; i<y; i++){
    _rvalue = _rvalue * (1+_rate);
  }
}

Bank :: Bank(int p, int y, int r) {
  _principal = p;
  _years = y;
  _rate = float(r)/100;
  _rvalue = _principal;

  for(int i=0; i<y; i++){
    _rvalue = _rvalue * (1+_rate);
  }
}

void Bank :: getData() {
  cout << "You Deposited: " << _principal << " for " << _years << " years " << " And  your return is: " << _rvalue << endl;
}

//Functions
int distance(Point p, Point q){
  cout << "Distance between two points P(" << p._x << "," << p._y << ")" << " and Q(" << q._x << "," << q._y << ") is : " << sqrt(pow((q._x - p._x),2) + pow((q._y - p._y),2)) << endl;
}

int main() {
  int pr;
  int y;
  float r;
  int R;

  cout << "-- Default Constructor --" << endl;
  Complex c;
  c.getData();

  cout << " -- Parameterized Constructor --" << endl;
  Myclass my("Juliana");
  my.getData();

  cout << "-- Quiz: Find the distance between two points e.g (1,1) & (1,1) is 0 --" << endl;
  Point p(1,1), q(1,1);
  distance(p,q);
  Point m(2,1), n(2,1);
  distance(m,n);

  cout << "-- Default Contructor parameters --" << endl;
  Simple s("Cari","Fransiska");
  s.getData();
  Simple s1("Cari");
  s1.getData();

  cout << "-- Dynamic Initialization of Constructor --" << endl;
  Bank b1, b2, b3;
  b1 = Bank();
  cout << "Enter Pricipal Amount: ";
  cin >> pr;

  cout << "Enter No. of years: ";
  cin >> y;

  cout << "Enter rate of interest in fractions:";
  cin >> r;
  b2 = Bank(pr,y,r);
  b2.getData();

  cout << "Enter Pricipal Amount: ";
  cin >> pr;

  cout << "Enter No. of years: ";
  cin >> y;

  cout << "Enter rate of interest in percentage:";
  cin >> R;

  b3 = Bank(pr,y,R);
  b3.getData();

  cout << "-- Copy Constructor --" << endl;
  Number x1,y1,z1(45),z3;
  x1.getData();
  y1.getData();
  z1.getData();

  Number z2 = z1; //Copy constructor will be called
  z2.getData();

  cout << "For z3 copy constructor will not be called" << endl;
  z3 = z1; // Copy constructo will not be called.
  z3.getData();

  cout << "For z4 copy constructor will be called" << endl;
  Number z4(z1);
  z4.getData();

  cout << BOLDYELLOW << "-- Destructor --" << RESET << endl;
  cout << "Inside Main Function" << endl;
  Num n1;
  {
      cout << "Entering object block" << endl;
      cout << "Creating two more objects" << endl;
      Num n2,n3;
      cout << "Exiting object block" << endl;
  }
  cout << "Exiting Main Function" << endl;

  return 0;
}
