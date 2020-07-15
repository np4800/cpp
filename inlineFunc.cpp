#include<iostream>
using namespace std;

inline int product(int a, int b) {
  return a*b;
}

float moneyRecieved(int money, float factor=1.04){
  return money*factor;
}

int main() {
  int a = 7;
  int b = 8;
  int money = 100000;
  cout << "-- inline function topic --" << endl;
  cout << "Here we are using inline function inorder to avoid lot of cost in terms of memory allocation and compilation because at the runtime it will always execute the function. \nIntead if inline is used the compiler will compile the code and put the compiled code in the calling function itself\nIt will compile once and run as many times as you want.\nCompiler will decide if it wants to make the function inline or not at runtime. Not all functions can be decalred as inline function." << endl;
  cout << "Product of the a & b " << product(a,b) << endl;
  cout << "Product of the a & b " << product(a,b) << endl;
  cout << "Product of the a & b " << product(a,b) << endl;
  cout << "Product of the a & b " << product(a,b) << endl;
  cout << "Product of the a & b " << product(a,b) << endl;
  cout << "You should not use inline function when the function body has lot of code in. It is good to have for small code body and the function is called at number of places.\nNot recommended for Recursion Function.\nNot recommended whilst using static variables." << endl;
  cout << "-- Default values topic --" << endl;
  cout << "For normal: Invest Rs. " << money << " and get return Rs. " << moneyRecieved(money) << " after 1 year" << endl;
  cout << "For VIP: Invest Rs. " << money << " and get return Rs. " << moneyRecieved(money,1.1) << " after 1 year" << endl;


  return 0;
}
