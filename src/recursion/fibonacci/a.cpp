// Copyright (C) 2016 by iamslash

// https://www.tutorialspoint.com/data_structures_algorithms/fibonacci_recursive_program_in_c.htm
//
// Fibonacci series satisfies the following conditions
// Fn = Fn-1 + Fn-2

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <queue>

int fibonacci(int n) {
  // base condition
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  // recursion
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  printf("%d th fibonacci is %d\n", 10, fibonacci(10));
  return 0;
}
