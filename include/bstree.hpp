#include <iostream>
using namespace std;

namespace BSTree {
    struct Node {
      int data;
     Node *left;
     Node *right;
  };

  class Tree {
      private:
          Node *root;
      public:
        Tree();
        void add(Node *&root, int data);
        void insert(int data);
        void delete_tree(Node *&data); 
  }
