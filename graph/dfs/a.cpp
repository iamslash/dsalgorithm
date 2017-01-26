// Copyright (C) 2017 by iamslash

// dfs
// 0. find a vertex which is not visited yet.
// 1. visit neighbors of a vertex.

#include <vector>
#include <cstdio>

const int MAX_V = 10;
int V = 7;

std::vector<std::vector<int> > adj;

void DfsAll() {
  
}

int main() {
  for (int i = 0; i < MAX_V; ++i)
    adj[i].clear();

  adj[0].push_back(1);
  adj[0].push_back(2);

  adj[1].push_back(0);
  adj[1].push_back(3);
  adj[1].push_back(4);
  adj[1].push_back(5);

  adj[2].push_back(0);
  adj[2].push_back(3);

  adj[3].push_back(1);
  adj[3].push_back(2);
  adj[3].push_back(4);
  adj[3].push_back(5);

  adj[4].push_back(3);

  adj[5].push_back(1);
  adj[5].push_back(3);
  adj[5].push_back(6);

  adj[6].push_back(1);
  adj[6].push_back(5);

  DfsAll();
  
  return 0;
}
