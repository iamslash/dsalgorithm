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


int main() {
  capacity[0][1] = 1;
  capacity[0][2] = 2;
  capacity[1][3] = 3;
  capacity[1][2] = 1;
  capacity[2][3] = 1;

  printf("%d\n", NetworkFlow(0, 3));
}
