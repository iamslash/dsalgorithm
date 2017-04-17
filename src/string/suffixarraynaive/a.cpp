// Copyright (C) 2016 by iamslash

#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstring>

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
  std::string m_s;
  explicit Comp(std::string s) {
    m_s = s;
  }
  bool operator() (int i, int j) {
    printf("  %d %d\n", i, j);
    return strcmp(m_s.c_str() + i, m_s.c_str() + j) < 0;
  }
};

std::vector<int> GetSuffixArray(const std::string& s) {
  std::vector<int> r(s.size());
  for (int i = 0; i < s.size(); ++i) {
    r[i] = i;
  }
  // std::sort(r.begin(), r.end(), Comp(s));
  std::sort(r.begin(), r.end(),
            [s](int i, int j) -> bool {
              return strcmp(s.c_str()+i, s.c_str()+j) < 0;
            });
  return r;
}

int main() {
  std::string h = "mississipi";
  std::vector<int> r = GetSuffixArray(h);
  PrintSuffixArray(h, r);
  return 0;
}
