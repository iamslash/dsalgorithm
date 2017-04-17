#include <cstdio>

// 
struct ListNode {
  int element;
  ListNode *prev, *next;
};

void DeleteNode(ListNode* node) {
  node->prev->next = node->next;
  node->next->prev = node->prev;
}

void RecoverNode(ListNode* node) {
  node->prev->next = node;
  node->next->prev = node;
}

int main() {
  return 0;
}

