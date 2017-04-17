// Copyright (C) 2016 by iamslash
#include <cstdio>
#include <vector>

struct DisjointSet {
  std::vector<int> m_parent, m_height;
  DisjointSet(int n) {
    m_parent.resize(n);
    m_height.resize(n);
    for (int i = 0; i < n; ++i) {
      m_parent[i] = i;
      m_height[i] = 0;
    }
  }
  int find(int u) {
    // base condition
    if (m_parent[u] == u)
      return u;
    // recursion
    return m_parent[u] = find(m_parent[u]);
  }
  void merge(int u, int v) {
    // get parents of u, v
    u = find(u);
    v = find(v);
    if (u == v)
      return;
    if (m_height[u] > m_height[v])
      std::swap(u, v);
    else if (m_height[u] == m_height[v])
      m_height[v]++;
    m_parent[u] = v;
  }
};

int main() {
  DisjointSet uf(10);
  uf.merge(0, 5);
  uf.merge(0, 6);
  uf.merge(4, 8);
  printf("%d\n", uf.find(0));
  printf("%d\n", uf.find(5));
  printf("%d\n", uf.find(6));
}
