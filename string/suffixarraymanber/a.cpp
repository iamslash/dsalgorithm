// Copyright (C) 2016 by iamslash

#include <string>
#include <vector>
#include <algorithm>

void PrintVInt(const std::vector<int>& a) {
  for (int i=0; i < a.size(); ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void PrintSuffixArray(const std::string& h, const std::vector<int>& sa) {
  for (int i = 0; i < sa.size(); ++i) {
    printf("%s\n", h.c_str() + sa[i]);
  }
}

struct Comp {
  std::vector<int> m_group;
  int m_t;
  explicit Comp(const std::vector<int>& group, int t) {
    m_group = group;
    m_t = t;
  }
  bool operator() (int i, int j) {
    if (m_group[i] != m_group[j])
      return m_group[i] < m_group[j];
    return m_group[i+m_t] < m_group[j+m_t];
  }
};

// O(N(lgN)^2)
std::vector<int> GetSuffixArray(const std::string& s) {
  // sa, group, t
  std::vector<int> sa(s.size());
  for (int i = 0; i < s.size(); ++i)
    sa[i] = i;
  std::vector<int> group(s.size()+1, -1);
  for (int i = 0; i < s.size(); ++i)
    group[i] = s[i];
  int t = 1;

  while (true) {
    // sort suffix array
    Comp c(group, t);
    std::sort(sa.begin(), sa.end(), c);

    printf("[%d] --------------------\n", t);
    PrintSuffixArray(s, sa);

    // make new t
    t *= 2;
    // base condition
    if (t >= s.size())
      break;

    // make new group for 2t
    std::vector<int> group2(s.size() + 1, -1);
    group2[sa[0]] = 0;
    for (int i = 1; i < s.size(); ++i) {
      if (c(sa[i-1], sa[i]))
        group2[sa[i]] = group2[sa[i-1]] + 1;
      else
        group2[sa[i]] = group2[sa[i-1]];
    }
    group = group2;
  }

  return sa;
}

int main() {
  std::string h = "mississipi";
  std::vector<int> sa = GetSuffixArray(h);
  printf("====================\n");
  PrintSuffixArray(h, sa);
  return 0;
}
