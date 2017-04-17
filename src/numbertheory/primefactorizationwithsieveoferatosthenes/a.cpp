// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <vector>

#define MAXN 65535

int min_factor[MAXN];

void Eratosthenes(int n) {
  // init min_factor
  min_factor[0] = min_factor[1] = -1;
  for (int i = 2; i <= n; ++i) {
    min_factor[i] = i;
  }
  //
  int sqrtn = sqrt(n);
  for (int i = 2; i <= sqrtn; ++i) {
    if (min_factor[i] == i) {
      for (int j = i * i; j <= n; j += i) {
        if (min_factor[j] == j)
          min_factor[j] = i;
      }
    }
  }
}

std::vector<int> Factor(int n) {
  std::vector<int> r;

  while (n > 1) {
    r.push_back(min_factor[n]);
    n /= min_factor[n];
  }

  return r;
}

int main() {
  std::vector<int> r = Factor(132);
  for (auto it = r.begin(); it != r.end(); ++it) {
    printf("%d ", *it);
  }
  printf("\n");
  return 0;
}
