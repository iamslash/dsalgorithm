// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <algorithm>

int N = 5;
std::vector<std::vector<int> > adj;
std::vector<bool> visited;
std::vector<int> order;

void print_v_int(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", i);
  }
  printf("\n");
}

void topological_sort() {

}

int main() {
    adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
    // visited 를 모두 false로 초기화한다.
    visited = std::vector<bool>(N, false);

    adj[0][1] = 1;
    adj[1][2] = 1;
    adj[1][3] = 1;
    adj[2][3] = 1;
    adj[2][3] = 1;

    std::vector<int> c = topological_sort();
    print_v_int(c);
  //
  return 0;
}
