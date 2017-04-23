// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <stack>

int N = 5;

// 그래프의 인접 행렬
// adj[i][j] = i와 j사이의 간선의 수
std::vector<std::vector<int> > adj;
// 각 정점의 컴포넌트 번호, 컴포넌트 븐호는 0부터 시작하며 같은 강결합
// 컴포넌트에 속한 정점들의 컴포넌트 번호가 같다.
std::vector<int> scc_id;
// 각 정점의 발견순서
std::vector<int> discovered, finished;
// 정점의 번호를 담는 스택
std::stack<int> stck;
//
int scc_counter, vertex_counter = 0;

void print_v_int(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
}

void print_v_bool(const std::vector<bool>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", static_cast<int>(v[i]));
  }
}

// here를 루트로 하는 서브 트리에서 역방향 간선이나 교차 간선을 통해
// 갈 수 있는 정점 중 최소 발견 순서를 반환한다.
int scc(int here) {
  int r = discovered[here] = vertex_counter++;
  // 스택에 here를 넣는다. here의 후손들은 모두 스택에서 here후에
  // 들어간다.
  stck.push(here);
  for (int there = 0; there < adj[here].size(); ++there) {
    // 연결되어 있지 않다.
    if (adj[here][there] == 0)
      continue;
    //
    if (discovered[there] == -1)
      r = std::min(r, scc(there));
    // there가 무시해야 하는 교차 간선이 아니라면
    else if (discovered[there] < discovered[here] &&
             finished[there] != 1)
      r = std::min(r, discovered[there]);
  }
  // here에서 부모로 올라가는 간선을 끊어야 할지 확인한다.
  if (r == discovered[here]) {
    // hdre를 루트로 하는 서브트리에 남아 있는 정점들을 전부 하나의
    // 컴포넌트로 묶는다.
    while (true) {
      int t = stck.top();
      stck.pop();
      scc_id[t] = scc_counter;
      if (t == here)
        break;
    }
    ++scc_counter;
  }
  finished[here] = 1;
  return r;
}

// tarjan의 scc알고리즘
std::vector<int> tarjan_scc() {
  // 배열들을 전부 초기화
  scc_id = discovered = std::vector<int>(adj.size(), -1);
  // 카운터 초기화
  scc_counter = vertex_counter = 0;
  // 모든 정점에 대해 Scc()호출
  for (int i = 0; i < adj.size(); ++i) {
    if (discovered[i] == -1)
      scc(i);
  }
  return scc_id;
}

int main() {
  adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
  adj[1][0] = 1;
  adj[2][1] = 1;
  adj[0][2] = 1;
  adj[0][3] = 1;
  adj[3][4] = 1;

  std::vector<int> r = tarjan_scc();

  print_v_int(r);

  return 0;
}
