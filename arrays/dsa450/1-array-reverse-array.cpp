#include <iostream>
using namespace std;

// DSA450-1: Reverse given array



void reverseArray(int arr[], int start, int end) {

  cout << "Reverse Array" << endl;

  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void printArray(int arr[], int size)
{
  for (int i=0; i<size; i++)
    cout << arr[i] << " ";
}

int main() {
    cout << "Hello World" << endl;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n << endl;
    reverseArray(arr,0,n-1);
    printArray(arr,n);
}
