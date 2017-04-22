// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <map>

int N = 7;

std::vector<std::vector<int> > adj;
std::vector<int> discovered;
std::vector<std::pair<int, int> > bridge;
int counter;

void print_v_pair(const std::vector<std::pair<int, int> >& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d-%d\n", v[0].first, v[1].second);
  }
  printf("\n");
}

int find_bridge(int here, bool b_root) {
  int r;

  return r;
}

int main() {
  // adjacency list
  adj = std::vector<std::vector<int> >(N, std::vector<int>());
  adj[0].push_back(1);
  adj[0].push_back(2);
  adj[1].push_back(0);
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[1].push_back(4);
  adj[1].push_back(6);
  adj[2].push_back(0);
  adj[2].push_back(1);
  adj[3].push_back(1);
  adj[3].push_back(5);
  adj[4].push_back(1);
  adj[4].push_back(5);
  adj[5].push_back(3);
  adj[5].push_back(4);
  adj[6].push_back(1);

  discovered = std::vector<int>(N, -1);
  bridge = std::vector<std::pair<int, int>>();
  find_bridge(0, true);

  print_v_pair(bridge);
  return 0;
}
