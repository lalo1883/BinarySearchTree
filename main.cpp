#include <iostream>
#include "BinarySearchTree.cpp"
using namespace std;

int main() {

    BinarySearchTree * newTree = new BinarySearchTree();

    newTree->Insert(6);
    newTree->Insert(21);
    newTree->Insert(64);
    newTree->Insert(2);

    cout << newTree->contains(64) << endl;
    cout << newTree->root->right->right->value;
}
