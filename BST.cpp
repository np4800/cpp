#include<iostream>
using namespace std;

class BST {
  int data;
  BST *left, *right;
public:
  BST();
  BST(int);
  BST* Insert(BST *, int);
};

BST :: BST() : data(0), left(NULL), right(NULL) {}

BST :: BST(int value) {
  data = value;
  left = right = NULL;
}

BST*

int main(void) {
  cout << "--- Binary Search Tree ---" << endl;
  return 0;
}
