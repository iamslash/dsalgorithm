// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>

#define MAX_N 987654321

unsigned char SIEVE[(MAX_N + 7) / 8];

// k is prime ???
inline bool IsPrime(int k) {
  return SIEVE[k >> 3] & (1 << (k & 7));
}

// turn off the bit
// k is not prime
inline void SetComposite(int k) {
  SIEVE[k >> 3] &= ~(1 << (k & 7));
}

void PrintSieve(int n) {
  for (int i = 0; i < n; ++i) {
    if (IsPrime(i))
        printf("%d ", i);
  }
  printf("\n");
}

// 2 부터 n까지의 모든 숫자를 순회하면서 소수가 아닌 녀석들을
// 제거한다. 이러한 과정을 n까지 수행하고 나면 남은 수들은 소수가 된다. 이때
// 제거되는 숫자들은 합성수이다. 임의의 합성수 m을 p * q로 표현해보자.
// p는 항상 sqrt(n)보다 작거나 같고 q는 sqrt(n)보다 크거나 같다.
// m을 q x p로 표현하는 경우는 고려대상이 아니다. p * q 통해서 이미 제거되기
// 때문이다.  따라서 p 에 해당하는 i는 2부터 sqrt(n) 까지만 살펴보면
// 된다.
//
// i가 정해지면 i의 배수이면서 n보다 작거나 같은 합성수 z를 만들어야
// 한다. 이때 z는 i * x로 표현할 수 있다. x는 2보다 크거나 같다고
// 생각할 수 있지만 i가 2보다 크다면 2는 고려대상이 아니다. 만약 x가
// i보다 작다면 x * i는 이미 처리되었기 때문이다.
void EratosThenes(int n) {
  memset(SIEVE, 0xFF, sizeof(SIEVE));
  SetComposite(0);
  SetComposite(1);

  // i is until not n but sqrt(n)
  // because any composite number is consisted of p and q (p x q)
  // p <= sqrt(n)
  // q >= sqrt(n)
  int sqrtn = int(sqrt(n));
  for (int i = 2; i <= sqrtn; ++i) {
    if (IsPrime(i)) {
      // j is not from i * 2 
      // because it is watched already
      for (int j = i * i; j <= n; j += i) {
        SetComposite(j);
      }
    }
  }
  printf("\n");
}

int main()
{
  int n = 1024;
  EratosThenes(n);
  PrintSieve(n);
  return 0;
}
