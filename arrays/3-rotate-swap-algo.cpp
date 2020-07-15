#include<iostream>
using namespace std;

/*
A = [d ... n-1]
B = [d .. n-1]
*/


void printArray(int arr[], int size) {
  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swap(int arr[], int fi, int si, int d) {
  int temp,i;
  for (i=0; i<d; i++) {
    temp = arr[fi+i];
    arr[fi+i] = arr[si+i];
    arr[si+i] = temp;
  }
}


void leftRotateArray(int arr[], int d, int n){
  if (d == 0 || d == n){
    return;
  }

  if (d == n-d) {
    swap(arr,0,n-d,d);
    cout << "When equal: Value of d: " << d << " and n: " << n << endl;
    return;
  }

  //if A is shorter
  if (d < n-d ) {
    cout << "A is shorter" << endl;
    cout << "Value of d: " << d << " and n: " <<n << endl;
    swap(arr,0,n-d,d);
    leftRotateArray(arr,d,n-d); // Recursive on B where B = [d .. n-1]
  }
  else { // B is shorter
    cout << "B is shorter d " << d << " and n: " << n << endl;
    swap(arr,0,dq,n-d);
    cout << arr+n-d << " " << n-d << " " << 2*d-n << endl;
    leftRotateArray(arr+n-d,2*d-n,d); // THis is tricky to understand
    printArray(arr,n);
  }

}

int main() {
  cout << "-- Rotating Swap Algo --" << endl;
  int arr[] = {1,2,3,4,5,6,7};
  int d=5;
  int n=sizeof(arr)/sizeof(arr[0]);

  cout << "Main Array" << endl;
  printArray(arr,n);
  cout << "After Swap" << endl;
  leftRotateArray(arr,d,n);
  printArray(arr,n);

  return 0;
}
