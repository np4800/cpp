#include <iostream>
using namespace std;

int main(){
	int x=10;
	// ref is a reference to x
	int& ref = x;

	//value of x has changed to 20 now
	ref = 20;
	cout << x << endl;
	cout << &ref <<  endl;
	// value of x has changed to 30 now
	x = 30;
	cout << &ref << endl;
	cout << ref << endl;
	return 0;
}
