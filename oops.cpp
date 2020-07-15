#include<iostream>
#include<string>
using namespace std;

class Employee
{
  private:
    int a, b;
  public:
    int c, d;
    void setData(int a1, int b1);
    void getData()
    {
      cout << "Value of a: " << a << endl;
      cout << "Value of b: " << b << endl;
      cout << "Value of c: " << c << endl;
      cout << "Value of d: " << d << endl;

    }
};

class Binary {
  string s;
  public:
    void read(void);
    void is_binary(void);
    void ones_compliment(void);
    void display();

};

void Binary :: read()
{
  cout << "Enter the data: ";
  cin>>s;
}

void Binary :: is_binary()
{
  for (int i=0; i<s.length(); i++)
  {
    if (s.at(i) != '0' && s.at(i) != '1')
    {
      cout << "It is not binary number" << endl;
      exit(0);
    }
  }
}

void Employee :: setData(int a1, int b1)
{
  a = a1;
  b = b1;
};

void Binary :: ones_compliment()
{
  for(int i=0; i<s.length(); i++)
  {
    if (s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else {
      s.at(i) = '0';
    }
  }
};

void Binary :: display()
{
  cout << "Display binary number";
  for(int i=0; i<s.length(); i++)
  {
    cout << s.at(i);
  }
  cout << endl;
};

int main() {
  cout << "-- OOPS Concepts --" << endl;
  Employee juliana;
  juliana.c = 30;
  juliana.d = 40;
  juliana.setData(1,2);
  juliana.getData();

  cout << "-- Nesting of Member Function Topic --" << endl;
  Binary b;
  b.read();
  b.is_binary();
  b.display();
  b.ones_compliment();
  b.display();

  return 0;
}
