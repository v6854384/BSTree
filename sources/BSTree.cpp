#include <iostream>
#include "bstree.hpp"
#include <string>
using namespace std;
using namespace BSTree;

Tree() { root = nullptr; }

void add(Node *&root, int data) {
            if (root == nullptr) {
                root = new Node { data, nullptr, nullptr };
            }
            if (data < root->data) {
                if (root->left = nullptr) {
                        root->left = new Node { data, nullptr, nullptr };
                }
                else add(root->left, data);
            }
            if (data > root->data) {
                if (root->right = nullptr) {
                        root->right = new Node { data, nullptr, nullptr };
                }   
                else add(root->right, data);
            }
        }

void insert(int data) { add (root, data); }

void delete_tree(Node *&data) {
            if (data != nullptr) {
                delete_tree(data->left);
                delete_tree(data->right);
                delete data;
                data = nullptr;
            }
        }
~Tree() {
            delete_tree(root);
        }
