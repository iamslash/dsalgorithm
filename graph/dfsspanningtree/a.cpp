// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <limits>
#include <cstring>

int N = 4;

std::vector<std::vector<int> > adj;
std::vector<int> discovered, finished;
int counter = 0;

void PrintVInt(const std::vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    printf("%d ", v[i]);
  }
}

void DfsSpanningTree(int here) {
  
}

int main() {
  adj = std::vector<std::vector<int> >(N, std::vector<int>(N, 0));
  adj[0][1] = 1;
  adj[0][2] = 1;
  adj[0][3] = 1;
  adj[1][2] = 1;
  adj[2][1] = 1;
  adj[3][1] = 1;
  adj[3][2] = 1;
  discovered = std::vector<int>(N, -1);
  finished = std::vector<int>(N, 0);

  DfsSpanningTree(0);
  
  return 0;
}
