// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <vector>
#include <algorithm>

#define MAXN 987654321

void PrintVInt(const std::vector<int>& a) {
  for (int i = 0; i < a.size(); ++i) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

std::vector<int> PartialSum(const std::vector<int>& a) {
  std::vector<int> r(a.size());
  r[0] = a[0];
  for (int i = 1; i < a.size(); ++i) {
    r[i] = r[i-1] + a[i];
  }
  return r;
}

int RangeSum(const std::vector<int>& psum, int a, int b) {
  if ( a == 0)
    return psum[b];
  return psum[b] - psum[a - 1];
}

int CloseToZero(std::vector<int>& psum) {
  std::sort(psum.begin(), psum.end());

  int r = MAXN;
  
  for (int i = 1; i < psum.size(); ++i) {
    r = std::min(r, psum[i] - psum[i-1]);
  }

  return r;
}

int main()
{
  std::vector<int> a = {-14,7,2,3,-8,4,-6,8,9,11};
  std::vector<int> psum = PartialSum(a);

  // PrintVInt(psum);
  
  printf("%d\n", CloseToZero(psum));

  return 0;
}
