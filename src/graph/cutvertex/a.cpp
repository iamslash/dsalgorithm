// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>

int N = 5;

std::vector<std::vector<int> > adj;
std::vector<int> discovered;
std::vector<bool> is_cut_vertex;
int counter;

void print_v_bool(const std::vector<bool>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", static_cast<int>(v[i]));
  }
  printf("\n");
}

// here를 시작으로 back edge의 terminal node중
// 발견 순서가 가장 최소인 녀석을 리턴한다.
int find_cut_vertex(int here, bool b_root) {
  discovered[here] = counter++;
  int r = discovered[here];

  // here가 root인 경우 자식 노드의 숫자를 세어서 두개 이상이어야
  // cut vertex가 될 수 있다.
  int children = 0;

  for (int i = 0; i < adj[here].size(); ++i) {
    int there = adj[here][i];
    if (discovered[there] == -1) {  // tree edge
      ++children;
      int subtree = find_cut_vertex(there, false);
      if (!b_root && subtree >= discovered[here])
        is_cut_vertex[here] = true;
      r = std::min(r, subtree);
    } else {  // forward, back edge
      r = std::min(r, discovered[there]);
    }
  }

  if (b_root && children >= 2)
    is_cut_vertex[here] = true;

  return r;
}

int main() {
  // adjacency list
  adj = std::vector<std::vector<int> >(N, std::vector<int>());
  adj[0].push_back(1);
  adj[0].push_back(2);
  adj[0].push_back(3);
  adj[1].push_back(2);
  adj[2].push_back(1);
  adj[3].push_back(1);
  adj[3].push_back(2);

  // adjacency matrix
  // adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
  // adj[0][1] = 1;
  // adj[0][2] = 1;
  // adj[0][3] = 1;
  // adj[1][2] = 1;
  // adj[2][1] = 1;
  // adj[3][1] = 1;
  // adj[3][2] = 1;

  discovered = std::vector<int>(N, -1);
  is_cut_vertex = std::vector<bool>(N, false);
  find_cut_vertex(0, true);

  print_v_bool(is_cut_vertex);
  return 0;
}
