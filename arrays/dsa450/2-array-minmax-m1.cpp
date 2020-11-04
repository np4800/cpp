#include <iostream>
using namespace std;

// Method-1 Linear Search:
// Algo: Create a struct with min and max as the variable and initialize as 1st and 2nd elements respectively from the array.
// Start the comparision from the 3rd element in the array i.e if the 3rd element is less than min then swap it else compatre it with max element if 3rd element is
// greater than max value then replace the max's value with the element that is part of the comparision in this case 3rd
// Continue doing the same till the end of the array.


// Pair struct will be used to return the two values from getMinMax()
struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n){
  struct Pair minmax;
  int i;
  // if there is only one element in the array then return min & max both as same element
  if (n == 1){
    minmax.max = arr[0];
    minmax.min = arr[0];
    return minmax;
  }

  // If there are more than 1 element in the array then initialize min and max
  if (arr[0] > arr[1]){
    minmax.max = arr[0];
    minmax.min = arr[1];
  } else {
    minmax.max = arr[1];
    minmax.min = arr[0];
  }

  // Start the comparision from the 3rd element.
  for (i=2; i<n; i++) {
      if(arr[i] > minmax.max) {
        minmax.max = arr[i];
      } else if (arr[i] < minmax.min) {
        minmax.min = arr[i];
      }
  }
};



int main() {
  cout << "Min Max element from the array" << endl;
  int arr[] = {1000, 11, 445, 1, 330, 3000 };
  int arr_size = 6;

  struct Pair minmax = getMinMax(arr,arr_size);
  cout << "Maximum number: " << minmax.max << endl;
  cout << "Minimum number: " << minmax.min << endl;
}
