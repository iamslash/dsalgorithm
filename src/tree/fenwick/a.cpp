// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>

struct FenwickTree {
  std::vector<int> m_tree;
  FenwickTree(int n) : m_tree(n+1) {
  }
  int sum(int pos) {
    ++pos;
    int r = 0;
    while (pos > 0) {
      r += m_tree[pos];
      pos &= (pos - 1);
    }
    return r;
  }
  void add(int pos, int val) {
    ++pos;
    while (pos < m_tree.size()) {
      m_tree[pos] += val;
      pos += (pos & -pos);
    }
  }
};

int main () {
  int N = 5;
  FenwickTree ft(N);
  for (int i = 0; i < N; ++i)
    ft.add(i, i + 1);

  printf("%d\n", ft.sum(4));
  return 0;
}
