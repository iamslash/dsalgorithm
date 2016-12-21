// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>

int N;
unsigned char sieve[(MAX_N + 7) / 8];

// k is prime ???
inline bool IsPrime(int k) {
  return sieve[k >> 3] & (1 << (k & 7));
}

// k is not prime
inline void SetComposite(int k) {
  sieve[k >> 3] &= ~(1 << (k & 7));
}

int main()
{

}
