// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>
#include <stack>

int N = 7;

// 그래프의 인접 행렬
// adj[i][j] = i와 j사이의 간선의 수
std::vector<std::vector<int> > adj;
// 각 정점의 컴포넌트 번호, 컴포넌트 븐호는 0부터 시작하며 같은 강결합
// 컴포넌트에 속한 정점들의 컴포넌트 번호가 같다.
std::vector<int> scc_id;
// 각 정점의 발견순서
std::vector<int> discovered;
// 정점의 번호를 담는 스택
std::stack<int> st;
//
int scc_counter, vertex_counter = 0;

void PrintVInt(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
}

void PrintVBool(const std::vector<bool>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", (int)v[i]);
  }
}

// here를 루트로 하는 서브 트리에서 역방향 간선이나 교차 간선을 통해
// 갈 수 있는 정점 중 최소 발견 순서를 반환한다.
int Scc(int here) {
  int r = discovered[here] = vertex_counter++;
  // 스택에 here를 넣는다. here의 후손들은 모두 스택에서 here후에
  // 들어간다.
  st.push(here);
  for (int i = 0; i < adj[here].size(); ++i) {
    int there = i;
    if (adj[here][there] == 0)
      continue;
    //
    if (discovered[there] == -1)
      r = std::min(r, Scc(there));
    // there가 무시해야 하는 교차 간선이 아니라면
    else if (scc_id[there] == -1)
      r = std::min(r, discovered[there]);
  }
  // here에서 부모로 올라가는 간선을 끊어야 할지 확인한다.
  if (r == discovered[here]) {
    // hdre를 루트로 하는 서브트리에 남아 있는 정점들을 전부 하나의
    // 컴포넌트로 묶는다.
    while (true) {
      int t = st.top();
      st.pop();
      scc_id[t] = scc_counter;
      if (t == here)
        break;
    }
  }
  return r;
}

// tarjan의 scc알고리즘
std::vector<int> TarjanScc() {
  // 배열들을 전부 초기화
  scc_id = discovered = std::vector<int>(adj.size(), -1);
  // 카운터 초기화
  scc_counter = vertex_counter = 0;
  // 모든 정점에 대해 Scc()호출
  for (int i = 0; i < adj.size(); ++i) {
    if (discovered[i] == -1)
      Scc(i);
  }
  return scc_id;
}

int main() {
  adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
  adj[1][2] = 1;
  adj[1][5] = 1;
  adj[2][3] = 1;
  adj[3][4] = 1;
  adj[4][2] = 1;
  adj[5][6] = 1;
  adj[6][4] = 1;
  adj[6][5] = 1;

  std::vector<int> r = TarjanScc();

  PrintVInt(r);

  return 0;
}
