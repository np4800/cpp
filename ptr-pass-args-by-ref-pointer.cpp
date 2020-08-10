#include <iostream>
using namespace std;

class Employee {
	private:
		string name;
		string desig;
	public:
		string getName() {
			name = 'Juliana';
			return name;	
		}
		string getDesig() {
			desig = "Slut";
			return desig;
		}
};

void printEmpDets(const Employee &emp){
	cout << emp.getName();
	cout << emp.getDesig();
}


int main(){
	cout << "-- Topic: When do we pass arguments by reference and pointer" << endl;
	Employee e1;
	printEmpDets(e1);
	return 0;
}
