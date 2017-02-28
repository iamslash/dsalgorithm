// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <vector>
#include <algorithm>

#define MAXN 987654321

int main()
{
  std::vector<int> a = {-14,7,2,3,-8,4,-6,8,9,11};
  std::vector<int> psum = PartialSum(a);

  // PrintVInt(psum);
  
  printf("%d\n", CloseToZero(psum));

  return 0;
}
