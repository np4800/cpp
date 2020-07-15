#include<iostream>
using namespace std;

class Shop {
  int itemId[5];
  int itemPrice[5];
  int counter=0;
public:
  void setPrice(void);
  void displayPrice(void);
};

void Shop :: setPrice(void) {
  cout << "Enter Item Id: ";
  cin >> itemId[counter];
  cout << "Enter Item Price: ";
  cin >> itemPrice[counter];
  counter++;
};

void Shop :: displayPrice(void) {
  for (int i=0; i<counter; i++) {
    cout << "The Item with ID " << itemId[i] << " is having price of : " << itemPrice[i] << endl;
  }
};


int main() {
  cout << "-- Memory allocation & using Array in Classes --" << endl;
  Shop items;
  items.setPrice();
  items.setPrice();
  items.setPrice();
  items.setPrice();
  items.setPrice();
  items.displayPrice();

  return 0;
}
