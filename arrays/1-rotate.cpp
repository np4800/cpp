#include<iostream>
using namespace std;

// This function will rotate by one element
void leftRotateByOne(int arr[], int n){
  int temp=arr[0], i;
  for (i=0; i<n-1; i++)
  {
    arr[i] = arr[i+1];
  }
  arr[i] = temp;
}

// to rotate the number of times the valud is input by user whcih is d.
void leftRotate(int arr[], int d, int n) {
  for (int i=0; i<d; i++)
  {
    leftRotateByOne(arr, n);
  }
}

void printArray(int arr[],int n) {
  for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int d;
  cout << "-- Program to rotate the array --" << endl;
  cout << "Enter the no. of position to be rotated: ";
  cin >> d;

  leftRotate(arr,d,n);
  printArray(arr,n);


  return 0;
}
