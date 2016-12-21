// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <cstring>
// priority queue by bitmask
// can represent 0 ~ 191 numbers
uint64_t pqueue[3] = {0x00,};

void pq_push(int i) {
  int div = i / 64;
  int mod = i % 64;
  pqueue[div] |= (1LL << mod);                
}

// return -1 when pqueue is empty
int pq_pop() {
  int r = -1;
  for (int i = 0; i < 3; ++i) {
    int n = __builtin_ctz(pqueue[i]);
    if (n < 64) {
      r = i * 64 + n;
      pqueue[i] &= ~(1LL << n);
      break;
    }
  }
  return r;
}

void pq_print() {
  for (int i = 2; i >= 0; --i) {
    for (int j = 63; j >= 0; --j) {
      printf("%1d ", pqueue[i] & (1LL << j) ? 1 : 0 );
    }
    printf(" | ");
  }
  printf("\n");
}

int main()
{
  memset(pqueue, 0LL, sizeof(pqueue));
  
  // pq_push(5);
  // pq_push(100);
  // printf("popped %4d\n", pq_pop());
  // printf("popped %4d\n", pq_pop());
  // pq_print();

  
  // test for __builtin_ctzll
  // printf("%d\n", __builtin_ctzll(0LL));
  // printf("%d\n", __builtin_ctzll(1LL));
  // printf("%d\n", __builtin_ctzll(8LL));
}
