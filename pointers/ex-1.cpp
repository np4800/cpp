#include<iostream>
using namespace std;

int main() {
  cout << "Example-1 Pointers --" << endl;
  int var = 40;
  int * ptr;
  ptr = &var;
  cout << "Printing value using  *ptr: " << *ptr << " and printing value using var " <<var<< endl;
  cout << "Printing address of var using ptr: [" << ptr << "] and priting address of var using unary & : [" << &var << "]" << endl;
  cout << "Printing the pointer's own address " << &ptr << endl;

  cout << "-- Arrays & Pointers --" << endl;
  int var1[] = {10,20,30,40};
  int *ptr1;
  ptr1 = var1;
  cout << "Value at inde 1 : " << *ptr1 << " ptr1 is pointing at the address for 1st element : " << ptr1 << " poniter's own address is " << &ptr1 << endl;
  ptr1++;
  cout << "Value at inde 2 : " << *ptr1 << " ptr1 is pointing at the address for 2nd element : " << ptr1 << " poniter's own address is " << &ptr1 << endl;
  ptr1++;
  cout << "Value at inde 2 : " << *ptr1 << " ptr1 is pointing at the address for 3rd element : " << ptr1 << " poniter's own address is " << &ptr1 << endl;
  ptr1++;
  cout << "Value at inde 2 : " << *ptr1 << " ptr1 is pointing at the address for 4th element : " << ptr1 << " poniter's own address is " << &ptr1 << endl;

  int nums[2][3] = {{16,17,18}, {1,2,3}};
  cout << "--" << endl;
  cout << "Value at nums[0][0] using point notation : " << *(*nums) << " and element's add: " << &nums[0][0] << endl;
  cout << "Value at nums[0][1] using point notation : " << *(*nums+1) << " and element's add: " << &nums[0][1] << endl;
  cout << "Value at nums[0][2] using point notation : " << *(*nums+2) << " and element's add: " << &nums[0][2] << endl;
  cout << " -- " << endl;
  cout << "Value at nums[1][0] using point notation : " << *(*(nums+1)) << " and element's add: " << &nums[1][0] << endl;
  cout << "Value at nums[1][1] using point notation : " << *(*(nums+1)+1) << " and element's add: " << &nums[1][1] << endl;
  cout << "Value at nums[1][2] using point notation : " << *(*(nums+1)+2) << " and element's add: " << &nums[1][2] << endl;

  return 0;
}
