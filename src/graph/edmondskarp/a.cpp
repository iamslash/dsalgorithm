// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>

const int MAX_V = 4;
const int MAX_I = 987654321;
int V = MAX_V;
int capacity[MAX_V][MAX_V];
int flow[MAX_V][MAX_V];

int EdmondsKarp(int source, int sink) {
  int r = 0;

  for (int i = 0; i < V; ++i) {
    for (int j = 0; j < V; ++j) {
      flow[i][j] = 0;
    }
  }

  while (true) {
    // BFS
    std::vector<int> parent(V, -1);
    std::queue<int> q;
    parent[source] = source;
    q.push(source);
    while (!q.empty()) {
      int here = q.front();
      q.pop();
      for (int there = 0; there < V; ++there) {
        if (capacity[here][there] - flow[here][there] > 0 &&
            parent[there] == -1) {
          q.push(there);
          parent[there] = here;
        }
      }
    }
    // terminate condition
    if (parent[sink] == -1)
      break;
    // get min amount
    int amount = MAX_I;
    for (int p = sink; p != source; p = parent[p]) {
      amount = std::min(amount,
                        capacity[parent[p]][p] - flow[parent[p]][p]);
    }
    // set flow
    for (int p = sink; p != source; p = parent[p]) {
      flow[parent[p]][p] += amount;
      flow[p][parent[p]] -= amount;
    }
    r += amount;
  }

  return r;
}

int main() {
  capacity[0][1] = 1;
  capacity[0][2] = 2;
  capacity[1][3] = 3;
  capacity[1][2] = 1;
  capacity[2][1] = 1;
  capacity[2][3] = 1;  

  printf("%d\n", EdmondsKarp(0, 3));
  printf("%d\n", EdmondsKarp(0, 2));
}
