// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <vector>

#define MAX_INT 987654321

// range freqeucy query
struct RFQ {
  int m_size;
  int m_mostfreq;
  int m_leftnum;
  int m_leftfreq;
  int m_rightnum;
  int m_rightfreq;
};

RFQ merge(const RFQ& a, const RFQ& b) {
  RFQ r;
  r.m_size = a.m_size + b.m_size;
  r.m_leftnum = a.m_leftnum;
  r.m_leftfreq = a.m_leftfreq;
  if (a.m_size == a.m_leftfreq && a.m_leftnum == b.m_leftnum)
    r.m_leftfreq += b.m_leftfreq;

  return r;
}

void print_v_int(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  std::vector<int> v;
  for (int i = 0; i <= 14; ++i)
    v.push_back(i);
  
  return 0;
}
