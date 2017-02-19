// Copyright (C) 2016 by iamslash

#include <cstdio>

int bit_cnt(const char& c) {
  // base condition
  if (c == 0)
    return 0;
  int r = c % 2;
  // recursion
  return r + bit_cnt(c >> 1);
}

void print_bit_mask(const char& c) {
  for (int i = 7; i >= 0; --i) {
    printf("%1d", c & (1 << i) ? 1 : 0);
  }
  printf("\n");
}

int main() {
  char BM = 0x03;

  //
  print_bit_mask(BM);
  printf("%d\n", bit_cnt(BM));

  // null set, full set
  // add a element
  // check a element included
  // dell a element
  // toggle a element
  // set operation (added, intersection, removed, toggled)
  // size of set (__builtin_popcount())
  // find a min element (__builtin_ctz())
  // del a min element
  // traversal of set
  
  return 0;
}
