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
std::vector<std::vector<bool> > bridge;
int counter;

void print_v_bool(const std::vector<std::vector<bool> >& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v[i].size(); ++j) {
      if (v[i][j])
        printf("%d-%d\n", i, j);
    }
  }
  printf("\n");
}

// here를 시작으로 back edge의 terminal node중
// 발견 순서가 가장 최소인 녀석을 리턴한다.
// there를 루트로 하는 서브트리에서 here를 제외한
// here의 부모로 가는 back edge가 없다면
// (here, there)는 bridge이다.
int find_bridge(int here, int parent) {
  printf("  %d\n", here);
  discovered[here] = counter++;
  int r = discovered[here];

  // 자식들을 순회하자.
  for (int i = 0; i < adj[here].size(); ++i) {
    int there = adj[here][i];
    if (there == parent)
      continue;

    // tree edge만 bridge가 될 수 있다.
    if (discovered[there] == -1) {
      int subtree = find_bridge(there, here);
      printf("  %d-%d %d\n", here, there, subtree);

      if (subtree > discovered[here]) {
        bridge[here][there] = true;
      }

      r = std::min(r, subtree);

    // (here, there)는 forward, back edge이다.
    } else if (there != parent && discovered[there] < discovered[here]) {
      r = std::min(r, discovered[there]);
    }
  }
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
  bridge = std::vector<std::vector<bool> >(N, std::vector<bool>(N, false));

  find_bridge(0, 0);
  print_v_bool(bridge);
  return 0;
}
