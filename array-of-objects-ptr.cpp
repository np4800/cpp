#include<iostream>
using namespace std;

class ShopItem {
	int id;
	float price;
public:
	void setItem(int i, float p) {
		id = i;
		price = p;
	}

	void getItem(void) {
		cout << "Id of Item : " << id << " and price is "  << price << endl;
	}
};


int main() {
	cout << "-- Array of objects using pointer --" << endl;
	int size = 3;
	int _id, i;
	float _price;
	ShopItem* ptr = new ShopItem[size];
	ShopItem* ptrTemp = ptr;

	for (i=0; i<size; i++) {
		cout << "Enter Id: ";
		cin>>_id;
		cout << "Enter price: ";
		cin >>_price;
		ptr->setItem(_id,_price);
		ptr++;
	}

	for (i=0; i<size; i++) {
		ptrTemp->getItem();
		ptrTemp++;
	}

	return 0;
}
