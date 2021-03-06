// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <cstdlib>
#include <map>

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

typedef std::pair<Node*, Node*> NodePair;

NodePair split(Node* root, KeyType key) {
  // base condition
  if (root == NULL)
    return NodePair(NULL, NULL);

  // recursion
  if (root->key < key) {
    NodePair rs = split(root->right, key);
    root->set_right(rs.first);
    return NodePair(root, rs.second);
  }

  NodePair ls = split(root->left, key);
  root->set_left(ls.second);
  return NodePair(ls.first, root);
}

Node* insert(Node* root, Node* node) {
  // base condition
  if (root == NULL)
    return node;

  // recursion
  if (root->priority < node->priority) {
    NodePair splitted = split(root, node->key);
    node->set_left(splitted.first);
    node->set_right(splitted.second);
    return node;
  } else if (node->key < root->key) {
    root->set_left(insert(root->left, node));
  } else {
    root->set_right(insert(root->right, node));
  }
  return root;
}

Node* merge(Node* a, Node* b) {
  if (a == NULL)
    return b;
  if (b == NULL)
    return a;
  if (a->priority < b->priority) {
    b->set_left(merge(a, b->left));
    return b;
  }
  a->set_right(merge(a->right, b));
  return a;
}

Node* erase(Node* root, KeyType key) {
  if (root == NULL)
    return root;

  if (root->key == key) {
    Node* r = merge(root->left, root->right);
    delete root;
    return r;
  }

  if (key < root->key) {
    root->set_left(erase(root->left, key));
  } else {
    root->set_right(erase(root->right, key));
  }
  return root;
}

int main() {
  Node * root = new Node(1);
  root = insert(root, new Node(2));

  return 0;
}
