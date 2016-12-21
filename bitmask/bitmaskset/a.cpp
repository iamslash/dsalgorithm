// Copyright (C) 2016 by iamslash

#include <cstdio>

int BitCount(int x) {
  if (x == 0) return 0;
  return x % 2 + BitCount(x / 2);
}

int main()
{
  // null set, full set
  int zero_bitmask = 0;
  int full_bitmask = (1 << 20) - 1;
  
  // add a element
  int bitmask = 0;
  int n = 2;
  bitmask |= (1 << n);
  
  // check a element included
  if (bitmask & (1 << n))
    printf("%d th element is in\n");
  
  // del a element
  bitmask &= ~(1 << n);
  
  // toggle a element
  bitmask ^= (1 << n);
  
  // set operation (added, intersection, removed, toggled)
  int a = 0x01;
  int b = 0x10;
  int added_bitmask = (a | b);
  int inter_bitmask = (a & b);
  int remov_bitmask = (a & ~b);
  int toggl_bitmask = (a ^ b);
  
  // size of set (__builtin_popcount())
  printf("size is %d\n", __builtin_popcount(a));
  printf("size is %d\n", BitCount(a));
  
  // find a min element (__builtin_ctz())
  
  // del a min element

  // traversal of set  
  
}
