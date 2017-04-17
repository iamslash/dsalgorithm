// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>

#define MAX_N 65535

int N;
// explodes[i] = bitmask set which is i-th element will be exploded with
int explodes[MAX_N] = {0, };

// set is stable ???
bool is_stable(int set) {
  for (int i = 0; i < N; ++i) {
    if ((set & (1 << i)) && (set & explodes[i]))
      return false;
  }
  return true;
}

// get count of maximal stable set
int cnt_stable_set() {
  int r = 0;

  for (int set = 1; set < (1 << N); ++set) {
    if (!is_stable(set))
      continue;
    //
    bool can_extend = false;
    for (int i = 0; i < N; ++i) {
      if (((set & (1 << i)) == 0) && ((set & explodes[i]) == 0)) {
        can_extend = true;
        break;
      }
    }
    if (!can_extend)
      ++r;
  }

  return r;
}

int main() {
  // total 5 elements
  N = 3;
  // 0th element will explode with 3th element
  explodes[0] = 0x03;  // 00000011
  explodes[1] = 0x07;  // 00000111
  explodes[2] = 0x0E;  // 00001111
  int set = 0x00;

  set = 0x02;
  printf("%x is %d\n", set, is_stable(set));
  // element = 0x09;
  // printf("%x is %d\n", element, IsStable(element));
  // printf("%d\n", CountStableSet());

  return 0;
}
