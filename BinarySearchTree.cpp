//
// Created by MSI Sword on 4/1/2024.
//

#include "BinarySearchTree.h"


class Node {
public:
    int value;
    Node * right;
    Node* left;

    Node(int value){
        this->value = value;
        right = nullptr;
        left = nullptr;
    }
};


class BinarySearchTree{
public:
    Node * root;

public:
    BinarySearchTree(){
        root = nullptr;
    }

    bool Insert(int value){
        Node * newNode = new Node(value);
        if (root == nullptr){
            root = newNode;
            return true;
        }

        Node * temp = root;
        while(true){
            if (newNode->value == temp->value){
                return false;
            }
            if (newNode->value < temp->value){
                if (temp->left == nullptr){
                    temp->left = newNode;
                    return true;
                }
                temp = temp->left;
            }

            if (newNode->value > temp->value){
                if (temp->right == nullptr){
                    temp->right = newNode;
                    return true;
                }
                temp = temp->right;
            }
        }
    }

    bool contains(int value){

        if (root == nullptr) return false;
        Node * temp = root;

        while (temp){
            if (temp->value == value){
                return true;
            }else if(value < temp->value){
                temp = temp->left;
            }else{
                temp = temp->right;
            }
        }
        return false;

    }




};