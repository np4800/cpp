#include<iostream>
using namespace std;
//Global variables
float _g_pi = 3.14;

void sum() {
	int a;
	cout << "\nInside sum, value of global variable: "<<_g_pi;
}

int main(){
	cout << "Hello World";
	cout << "\nI am fine Thank You!!";

	//Variables
	int a=10, b=12;
	int num1, num2;
	bool is_true = true;
	float f=34.4F;
	long double d=34.4L;
	_g_pi = 3.15;


	cout << "\nValue of a: "<<a;
	cout << "\nValue of b: "<<b;
	sum();
	cout << "\nGlobal Variable: "<<_g_pi;
	cout << "\nValue of Boolean is_true: "<<is_true;

	// cout << "\n-- Taking Input from user IO Stream -- ";
	// cout << "\nEnter num1: ";
	// cin >> num1;
	//
	// cout << "\nEnter num2: ";
	// cin >> num2;
	// cout << "\nThe sum is: "<<num1+num2<<endl;

	// Operators
	cout <<endl;
	cout << "-- Operators Topic --"<<endl;
	cout <<"value of a++: "<<a++<<endl;
	cout <<"value of a: "<<a<<endl;
	cout <<"value of --a: "<<--a<<endl;
	cout <<"value of a--: "<<a--<<endl;
	cout <<"value of a: "<<a<<endl;

	// Assignment Operators
	// Comparision Operators
	cout <<endl;
	cout <<"-- Comparision Operators --"<<endl;
	cout << "The value of a>b: "<<(a>b)<<endl;
	cout << "The value of a<b: "<<(a<b)<<endl;
	cout << "The value of a==b: "<<(a==b)<<endl;
	cout << "The value of a!=b: "<<(a!=b)<<endl;

	// Logical Operator
	cout <<endl;
	cout <<"-- Logical Operators --"<<endl;
	cout << "The value of logical operator ((a==b) && (a<b)): "<<((a==b) && (a>b))<<endl;
	cout << "The value of logical operator ((a==b) || (a<b)): "<<((a==b) || (a<b))<<endl;
	cout << "The value of logical operator (!(a==b)): "<<(!(a==b))<<endl;

	// Scope Resolution operator in order to get the global values

	//_g_pi = 3.15;
	cout << "Value of _g_pi in the main function is overwritten: "<<_g_pi<<endl;
	cout << "Value of _g_pi using scope resolution operator gives original values: "<<::_g_pi<<endl; //Scope resolution operator does not work. It should print 3.14 instead of 3.15

	// Float and Long double : Default type is long double - this can be proved by sizeOF function
	cout << "The sizeof 34.4 is:  " <<sizeof(34.4)<<endl;
	cout << "The sizeof 34.4f is: " <<sizeof(34.4f)<<endl;
	cout << "The sizeof 34.4F is: " <<sizeof(34.4F)<<endl;
	cout << "The sizeof 34.4l is: " <<sizeof(34.4l)<<endl;
	cout << "The sizeof 34.4L is: " <<sizeof(34.4L)<<endl;

	// Builtin datatypes
	cout <<endl;
	cout << "-- Reference variable - Builtin Datatypes - literals --> float, double, long double literal --"<<endl;
	// Analogy from HarryBhai : Rohan is called 'Monty' by his Papa, he is called 'duggu' by his girlfriend
	float x = 455;
	float & y = x;
	cout << "x: "<<x<<endl;
	cout << "& y: "<<y<<endl;

	// Typecasting
	cout <<endl;
	cout <<"-- Typecasting topic --"<<endl;
	float _typecast_a = 45.5;
	cout <<"Original values is "<<_typecast_a<<" After typecasting to int - "<<int(_typecast_a)<<endl;





	return 0;

}
