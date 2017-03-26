// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <vector>

struct RMQ {
  int m_n;
  std::vector<int> m_rangemin;
  explicit RMQ(const std::vector<int>& v) {
    m_n = v.size();
    m_rangemin.resize(m_n * 4);
    init(v, 0, m_n - 1, 1);
  }
  int init(const std::vector<int>& v, int left, int right, int node) {
    return 0;
  }
  int query(int left, int right) {
    return 0;
  }

};

int main() {
  std::vector<int> v;
  for (int i = 0; i <= 14; ++i)
    v.push_back(i);
  RMQ rmq(v);
  printf("%d\n", rmq.query(6, 12));
  return 0;
}


