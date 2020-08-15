#include <iostream>
#include <vector>
using namespace std;

void PrintValue(int value) {
  cout << "Value: " << value << endl;
}

void HelloWorld() {
  cout << "Hello World! From Auto Function pointer" << endl;
}

void ForEach(vector<int> values, void(*func)(int)) {
  for (int value : values)
    func(value);
}

int main() {
  cout << "--- POINTERS ---" << endl;
  int x=10;
  int *ptr;
  ptr = &x;

  cout << "Address of x using pointer ptr: " << ptr << endl;
  cout << "Address of x using reference:  " << &x << endl;
  cout << "See the result of above two statements - the memory is location is same" << endl;
  cout << "Now the value of x using pointer notation: " << *ptr << endl;
  cout << "Advancing the pointer location" << endl;
  ptr++;
  cout << "Now the address of ptr after increment ptr++ " << ptr << endl;
  cout << "Now the value at that memory location, it should return garbage value:  " << *ptr << endl;

  cout << "--- FUNCTION POINTERS ---" << endl;
  auto function = HelloWorld; //auto is the keyword to assign the function body as the value. It can be represented in different way as well.
  typedef void(*HelloWorldFunction)(); // other way of representing above auto method.
  HelloWorldFunction func1 = HelloWorld;

  func1();
  function();

  vector<int> values = {1,2,34,4};
  ForEach(values,PrintValue);

  cout << "Above also can be written in different ways. This is how LAMBDA functions come into picture, they are like throw away functions" << endl;

  ForEach(values, [](int value) { cout << "Value: " << value << endl; });

  return 0;
}
