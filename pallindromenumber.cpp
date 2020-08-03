#include<iostream>
using namespace std;

void isPallindrome(int n) {
	int temp=n,digit,rev=0;
	while (n !=0 ){
		digit = n%10;
		rev = (rev*10)+digit;
		n=n/10;
	}
	if (rev == temp){
		cout << temp << " is pallindrome " << endl;
	}
};


int main() {
  int arr[]= {212,232,333,466};
  for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++) {
	isPallindrome(arr[i]);
  }
  return 0;
}
