// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <cstdlib>

typedef int KeyType;

struct Node {
  KeyType key;
  int priority, size;
  Node *left, *right;
  explicit Node(const KeyType& _key) : key(_key), priority(std::rand()),
                              size(1), left(NULL), right(NULL) {}
  void set_left(Node* new_left) {
    left = new_left;
    calc_size();
  }

  void set_right(Node* new_right) {
    right = new_right;
    calc_size();
  }

  void calc_size() {
    size = 1;
    if (left)
      size += left->size;
    if (right)
      size += right->size;
  }
};


int main() {
  Node * root = new Node(1);
  
    return 0;
}
