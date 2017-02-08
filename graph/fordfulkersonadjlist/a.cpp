// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>

const int MAX_V = 4;
const int MAX_I = 987654321;
int V = MAX_V;

struct Edge {
  int target, capacity, flow;
  Edge* reverse;
  int ResidualCapacity() const {
    return capacity - flow;
  }
  void push(int amt) {
    flow += amt;
    reverse->flow -= amt;
  }
};

std::vector<Edge*> adj[MAX_V];

void AddEdge(int u, int v, int capacity) {
  Edge* uv = new Edge();
  Edge* vu = new Edge();

  uv->target = v;
  uv->capacity = capacity;
  uv->flow = 0;
  uv->reverse = vu;

  vu->target = u;
  vu->capacity = 0;
  vu->flow = 0;
  vu->reverse = uv;

  adj[u].push_back(uv);
  adj[v].push_back(vu);
}

int NetworkFlow(int source, int sink) {
  int r = 0;

  while (true) {
    std::vector<int> parent(MAX_V, -1);
    std::queue<int> q;
    parent[source] = source;
    q.push(source);

    printf("%d\n", source);
    
    while (!q.empty() && parent[sink] == -1) {
      printf("...\n");
      int here = q.front();
      q.pop();
      printf("  here: %d, size: %d\n", here, adj[here].size());
      for (int i = 0; i < adj[here].size(); ++i) {
        Edge* e = adj[here][i];
        int there = e->target;
        printf("    there: %d, rcapa: %d, parent[there]: %d\n", there, e->ResidualCapacity(), parent[there]);
        if (e->ResidualCapacity() > 0 &&
            parent[there] == -1) {
          // printf("----");
          q.push(there);
          parent[there] = here;
          printf("      edge: %d -> %d queue: [%d,%d] of %d\n",
                 here, there, q.front(), q.back(), q.size());
        }
      }
    }
    if (parent[sink] == -1)
      break;
    int amount = MAX_I;

    // TODO: 
    for (int p = sink; p != source; p = parent[p]) {
      printf(":: %d -> %d\n", parent[p], p);
      amount = std::min(amount, adj[parent[p]][p]->ResidualCapacity() );
      printf("        amount: %d\n", amount);
    }
    for (int p = sink; p != source; p = parent[p]) {      
      adj[parent[p]][p]->push(amount);
    }
    r += amount;
  }
  return r;
}

int main() {
  AddEdge(0, 1, 1);
  AddEdge(0, 2, 2);
  AddEdge(1, 3, 3);
  AddEdge(1, 2, 1);
  AddEdge(2, 3, 1);
  
  printf("%d\n", NetworkFlow(0, 3));
}
