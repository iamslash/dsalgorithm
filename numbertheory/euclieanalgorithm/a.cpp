// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>

int Gcd1(int p, int q) {
  // printf("%d %d\n", p, q);
  if (p < q)
    std::swap(p, q);
  if (q == 0)
    return p;
  return Gcd1(p - q, q);
}

int Gcd2(int p, int q) {
  if (q == 0) return p;
  return Gcd2(q, p % q);
}


int main() {
  printf("%d\n", Gcd1(128, 48));
  printf("%d\n", Gcd1(37, 11));
  printf("%d\n", Gcd2(128, 48));
  printf("%d\n", Gcd2(37, 11));
  // printf("%d\n", Gcd2(128, 48));
  return 0;
}
