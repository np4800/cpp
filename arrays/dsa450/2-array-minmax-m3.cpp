#include <iostream>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n) {
  Pair minmax;
  int i;

  // If the size of an array is even then assign first two element as the minmax.max and minmax.min repectively
  if (n%2 == 0) {
    if (arr[0] > arr[1]) {
      minmax.max = arr[0];
      minmax.min = arr[1];
    }
    if (arr[0] < arr [1]) {
      minmax.max = arr[1];
      minmax.min = arr[0];
    }
    i = 2;
  } else { // If the size of an array is odd then assign the first element to both minmax.max & minmax.min
    minmax.max = arr[0];
    minmax.min = arr[0];
    i = 1;
  }


  while (i < (n-1)) {
    cout << "i=" <<i << " n=" << n <<endl;
    if (arr[i] > arr[i+1]) {
      if (arr[i] > minmax.max) {
        minmax.max = arr[i];
      }
      if (arr[i+1] < minmax.min) {
        minmax.min = arr[i+1];
      }
    }
    if (arr[i+1] > arr[i]) {
      if (arr[i+1] > minmax.max) {
        minmax.max = arr[i+1];
      }
      if (arr[i] < minmax.min) {
        minmax.min = arr[i];
      }
    }

    i +=2;
  }
  return minmax;
};

int main() {
  int arr[] = {1000, 11, 445, 1, 3000 };
  int arr_size = 5;
  Pair minmax;

  minmax = getMinMax(arr,arr_size);
  cout << "Minimum Number in Array arr: " << minmax.min << endl;
  cout << "Maximum Number in Array arr: " << minmax.max << endl;

  return 0;
}
