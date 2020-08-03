#include <iostream>
#include <vector>
using namespace std;

int isSorted(vector<int> arr, int n) {
	vector<int>  brr;
	int temp=0;
	for (int i=0; i<n; i++) {
		brr.push_back(arr[i]);
	}

	for (int j=0; j<n; j++){
		if (j+1 == n) {
			break;	
		}
		if (brr[j] > brr[j+1]){
			temp = brr[j];
			brr[j] = brr[j+1];
			brr[j+1] = temp;
		}
	}

	for (int k=0; k<n; k++) {
		if (brr[k] != arr[k]) {
			return 1;
		}	
	}
	return 0;
}

int main() {
	int T;
	int N;
	int value;
	vector<int> arr;
	cin >> T;
	while (T--){
		cin >> N;
		for (int i=0; i<N; i++) {
			cin >> value;
			arr.push_back(value);
		}
		cout << isSorted(arr,N);
		arr.clear();
		cout << endl;
	}
	return 0;
}
