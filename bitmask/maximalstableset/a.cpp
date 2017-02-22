// Copyright (C) 2016 by iamslash

// 문제의 정의가 명확하지 않다. 한개만 더 넣으면 폭발하는 집합을
// 구하라는 건가?  explodes[i]는 i번째 원소와 함께 존재하면 터지는
// 모든 원소일까 아니면 일부 원소일까
//
// 한개만 더 넣으면 폭발하는 극대 안정 집합의 수를 구한다고 가정했다.
// explodes[i]는 i번째 원소와 함께 존재하면 터지는 원소들의 목록이라고 가정했다.

#include <cstdio>
#include <cstdint>

#define MAX_N 65535

int N;
int explodes[MAX_N] = {0,};

int main()
{
  // total 5 elements
  N = 3;
  // 0th element will explode with 3th element
  explodes[0] = 0x02;
  int element = 0x00;
  
  // element = 0x02;
  // printf("%x is %d\n", element, IsStable(element));
  // element = 0x09;
  // printf("%x is %d\n", element, IsStable(element));
  printf("%d\n", CountStableSet());

  return 0;
}
