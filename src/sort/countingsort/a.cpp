// Copyright (C) 2016 by iamslash

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

void print_v_int(const std::vector<int>& a) {
  for (int i = 0; i < a.size(); ++i) {
    std::cout << std::setw(2) << a[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int a[] = {1, 1, 0, 3, 4, 5, 1, 0, 5, 5, 3, 1, 2, 2, 2, 2};
  std::vector<int> v_a(a, a+sizeof(a)/sizeof(int));  // input
  std::vector<int> v_b(sizeof(a)/sizeof(int));  // output
  std::vector<int> v_count(v_b.size(), 0);
  std::vector<int> v_count_sum(v_b.size(), 0);

  // for v_count
  for (int i = 0; i < v_a.size(); i++) {
    v_count[v_a[i]]++;
  }

  v_count_sum[0] = v_count[0];
  // for v_count_sum
  for (int i = 1; i < v_count.size(); ++i) {
    v_count_sum[i] = v_count_sum[i-1] + v_count[i];
  }

  // print_v_int(v_count);
  // print_v_int(v_count_sum);


  // sort
  for (int i = v_a.size() - 1; i >= 1; --i) {
    v_b[v_count_sum[v_a[i]]] = v_a[i];
    v_count_sum[v_a[i]]--;
  }

  print_v_int(v_a);
  print_v_int(v_b);

  return 0;
}
