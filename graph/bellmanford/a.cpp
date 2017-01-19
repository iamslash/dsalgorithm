// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>
#include <limits>

#define MAX_V 16
const int MAX_INT = std::numeric_limits<int>::max();

int V = MAX_V;

std::vector<std::pair<int, int> > adj[MAX_V];

std::vector<int> BellmanFord(int src) {
  std::vector<int> upper(V, MAX_INT);
  upper[src] = 0;
  bool updated;
  for (int iter = 0; iter < V; ++iter) {
    updated = false;

    for (int herenode = 0; herenode < V; ++iter) {
      for (int i = 0; i < adj[herenode].size(); ++i) {
        int therenode = adj[herenode][i].first;
        int therecost = adj[herenode][i].second;
        if (upper[therenode] > upper[herenode] + therecost) {
          upper[therenode] = upper[herenode] + therecost;
          updated = true;
        }
      }
    }

    if (!updated)
      break;
  }

  if (!updated)
    upper.clear();

  return upper;
}

int main() {
  for (int i = 0; i < MAX_V; ++i)
    adj[i].clear();

  adj[0].push_back(std::make_pair(1, 5));
  adj[0].push_back(std::make_pair(2, 1));

  adj[1].push_back(std::make_pair(0, 5));
  adj[1].push_back(std::make_pair(3, 1));
  adj[1].push_back(std::make_pair(5, 3));
  adj[1].push_back(std::make_pair(6, 3));

  adj[2].push_back(std::make_pair(0, 1));
  adj[2].push_back(std::make_pair(3, 2));

  adj[3].push_back(std::make_pair(1, 1));
  adj[3].push_back(std::make_pair(2, 2));
  adj[3].push_back(std::make_pair(4, 5));
  adj[3].push_back(std::make_pair(6, 3));

  adj[4].push_back(std::make_pair(3, 5));
  
  adj[5].push_back(std::make_pair(1, 3));
  adj[5].push_back(std::make_pair(6, 2));
  
  adj[6].push_back(std::make_pair(1, 3));
  adj[6].push_back(std::make_pair(3, 3));
  adj[6].push_back(std::make_pair(5, 2));
      
  std::vector<int> r = BellmanFord(0);

  // PrintVInt(r);  
  
  return 0;
}
