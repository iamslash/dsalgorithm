// Copyright (C) 2016 by iamslash

// Kruskal algorithm
//
// 0. sort edges
// 1. select edges, vertices in small order
//

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>

struct OptimizedDisjointSet {
  std::vector<int> parent, rank;
  explicit OptimizedDisjointSet(int n) : parent(n), rank(n, 1) {
    for (int i = 0; i < n; ++i)
      parent[i] = i;
  }
  int find(int u) {
    if (parent[u] == u)
      return u;
    return parent[u] = find(parent[u]);
  }
  void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v)
      return;
    if (rank[u] > rank[v])
      std::swap(u, v);
    // always rank[v] > rank[u] u should be child of v
    parent[u] = v;
    if (rank[u] == rank[v])
      ++rank[v];
  }
};

const int MAX_V = 100;
int V = 7;
std::vector<std::pair<int, int> > adj[MAX_V];

int Kruskal(std::vector<std::pair<int, int> >* selected) {
  int r = 0;
  selected->clear();
  std::vector<std::pair<int, std::pair<int, int> > > edges;
  // O(|V||E|), E = V^2
  for (int u = 0; u < V; ++u) {
    for (int i = 0; i < adj[u].size(); ++i) {
      int v = adj[u][i].first;
      int cost = adj[u][i].second;
      edges.push_back(std::make_pair(cost, std::make_pair(u, v)));
    }
  }
  // O(|E|lg|E|), O(|V]^2lg|V|^2)
  std::sort(edges.begin(), edges.end());
  OptimizedDisjointSet sets(V);
  for (int i = 0; i < edges.size(); ++i) {
    int cost = edges[i].first;
    int u = edges[i].second.first;
    int v = edges[i].second.second;
    if (sets.find(u) == sets.find(v))
      continue;
    sets.merge(u, v);
    selected->push_back(std::make_pair(u, v));
    r += cost;
  }

  return r;
}

int main() {
  for (int i = 0; i < MAX_V; ++i)
    adj[i].clear();

  adj[0].push_back(std::make_pair(1, 5));
  adj[0].push_back(std::make_pair(2, 1));

  adj[1].push_back(std::make_pair(0, 5));
  adj[1].push_back(std::make_pair(3, 1));
  adj[1].push_back(std::make_pair(4, 3));
  adj[1].push_back(std::make_pair(5, 3));

  adj[2].push_back(std::make_pair(0, 1));
  adj[2].push_back(std::make_pair(3, 4));

  adj[3].push_back(std::make_pair(1, 1));
  adj[3].push_back(std::make_pair(2, 4));
  adj[3].push_back(std::make_pair(4, 5));
  adj[3].push_back(std::make_pair(5, 3));

  adj[4].push_back(std::make_pair(3, 5));

  adj[5].push_back(std::make_pair(1, 3));
  adj[5].push_back(std::make_pair(3, 3));
  adj[5].push_back(std::make_pair(6, 2));

  adj[6].push_back(std::make_pair(1, 3));
  adj[6].push_back(std::make_pair(5, 2));

  std::vector<std::pair<int, int> > r;
  printf("%d\n", Kruskal(&r));

  for (const std::pair<int, int>& p : r) {
    printf("%d -> %d\n", p.first, p.second);
  }

  return 0;
}
