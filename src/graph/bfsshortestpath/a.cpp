// Copyright (C) 2016 by iamslash

// get shortest path by bfs

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <queue>

int N = 5;

std::vector<std::vector<int> > adj;

void print_v_int(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

std::vector<int> get_shortest_path(int v, const std::vector<int>& parent) {
  std::vector<int> r(1, v);
  int cnt = 0;
  while (parent[v] >= 0) {
    // printf("%d\n", parent[v]);
    v = parent[v];
    r.push_back(v);
    if (++cnt >= 10)
      break;
  }
  
  return r;
}

std::vector<int> bfs(int start) {

}

int main() {
  adj.clear();
  adj.resize(N);
  adj[0].push_back(1);
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(3);

  // Bfs(0);
  std::vector<int> r = get_shortest_path(3, bfs(0));
  PrintVInt(r);

  return 0;
}
