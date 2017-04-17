// Copyright (C) 2017 by iamslash

#include <cstdio>
#include <vector>
#include <algorithm>

void print_v_int(const std::vector<int>& v) {

  for (int i = 0; i < v.size(); ++i)
    printf("%d ", v[i]);
  printf("\n");
}

void insert_sort(std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = i; j > 0; --j) {
      // printf("  %d %d\n", j-1, j);
      if (v[j] < v[j-1]) {
        std::swap(v[j-1], v[j]);
      }
    }
  }
}

int main()
{
  std::vector<int> v = {1, 5, 4, 3, 2, 10, 7, 6, 8, 9};
  insert_sort(v);
  print_v_int(v);
  return 0;
}
