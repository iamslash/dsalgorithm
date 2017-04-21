// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>

int N = 4;

std::vector<std::vector<int> > adj;
std::vector<int> discovered, finished;
int counter = 0;

void print_v_int(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
}

void dfs_spanning_tree(int here) {
  discovered[here] = ++counter;
  for (int there = 0; there < adj[here].size(); ++there) {
    if (adj[here][there] == 0)
      continue;
    if (discovered[there] < 0) {  // tree edge
      printf("%d-%d : tree\n", here, there);
      dfs_spanning_tree(there);
    } else if (discovered[here] < discovered[there]) {  // forward edge
      printf("%d-%d : forward\n", here, there);
    } else if (finished[there] == 0) {
      printf("%d-%d : backward\n", here, there);
    } else {
      printf("%d-%d : cross\n", here, there);
    }
  }
  finished[here] = 1;
}

int main() {
  adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
  adj[0][1] = 1;
  adj[0][2] = 1;
  adj[0][3] = 1;
  adj[1][2] = 1;
  adj[2][1] = 1;
  adj[3][1] = 1;
  adj[3][2] = 1;
  discovered = std::vector<int>(N, -1);
  finished = std::vector<int>(N, 0);
  dfs_spanning_tree(0);
  return 0;
}
