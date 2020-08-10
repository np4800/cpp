#include <iostream>
using namespace std;

class Pet {
	public:
		virtual string getDescription() const {
			return "This is a Pet";
		}
};

class Dog : public Pet {
	public:
		virtual string getDescription() const {
			return "This is a Dog";
		}
};

void describe(Pet p) {
	cout << p.getDescription();
}


int main() {
	cout << "Description: if we pass and object of subclass to a funtion that expects an object of superclass then the passed object is sliced if it is 'pass by value'" << endl;
	
	Dog d;
	describe(d);
	return 0;
}
