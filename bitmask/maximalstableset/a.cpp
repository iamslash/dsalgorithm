// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>

#define MAX_N 65535

int N;
int explodes[MAX_N] = {0,};

bool IsStable(int set) {
  for (int i = 0; i < N; ++i) {
    // explodes[i]에 세팅된 비트가 set에 존재하는가???
    if ((set & (1 << i)) && (set & explodes[i]))
      return false;
  }
  return true;
}

int CountStableSet() {
  int r = 0;

  for (int set = 1; set < (1 << N); ++set) {
    if (!IsStable(set))
      continue;
    bool can_extend = false;
    for (int add = 0; add < N; ++add) {
      if ((set & (1 << add)) == 0 && (explodes[add] & set) == 0) {
        can_extend = true;
        break;
      }
    }
    if (!can_extend)
      ++r;
  }

  return r;
}

int main()
{
  N = 1;
  explodes[0] = 0x03;

  int element = 0x02;
  printf("%x is %d\n", element, IsStable(element));
  element = 0x09;
  printf("%x is %d\n", element, IsStable(element));

  return 0;
}
