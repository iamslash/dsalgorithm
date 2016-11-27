// Copyright (C) 2016 by iamslash

#include <vector>

const int ALPHABETS = 26;
int ToNumber(char ch) {
  return ch - 'A';
}

// node of trie
struct TrieNode {
  TrieNode* children[ALPHABETS];
  // this node is terminal
  bool terminal;
  TrieNode() : terminal(false) {
    memset(children, 0, sizeof(children));
  }
  ~TrieNode() {
    for (int i = 0; i < ALPHABETS; ++i)
      if (children[i])
        delete children[i];
  }
  // 이 노드를 루트로 하는 트라이에 문자열 key를 추가한다.
  void insert(const char* key) {
    if (*key == 0) {
      terminal = true;
    } else {
      int next = ToNumber(*key);
      if (children[next] == NULL)
        children[next] = new TrieNode();
      children[next]->insert(key + 1);
    }
  }

  TrieNode* find(const char* key) {
    if (*key == 0)
      return this;
    int next = ToNumber(*key);
    if (children[next] == NULL)
      return NULL;
    return children[next]->find(key + 1);
  }
};

std::vector<std::pair<int, int> > AhoCorasicSearch(
    const std::string& s, TrieNode* root) {
  std::vector<std::pair<int, int> > r;
  TrieNode* state = root;
  // 실제 반복문 내는 KMP와 별로 다를 것이 없다.
  for (int i = 0; i < s.size(); ++i) {
    int chr = ToNumber(s[i]);
    while (state != root && state->children[chr] == NULL)
      state = state->fail;
    if (state->children[chr])
      state = state->children[chr];
    for (int j = 0; j < state->output.size(); ++j)
      r.push_back(make_pair(i, state->output[j]));
  }  
  return r;
}

int main() {
  TrieNode* ptn = new TrieNode();
  ptn->insert("hello");
  ptn->insert("world");

  std::vector<std::pair<int, int> > r = AhoCorasicSearch(
      "ThisIsOurWorldHello", ptn);
  
  delete ptn;
}
