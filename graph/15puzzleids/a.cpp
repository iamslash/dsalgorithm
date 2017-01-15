// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>

int best;

class State {
 public:
  std::vector<State> GetAdj() const;
  bool operator < (const State& rhs) const;
  bool operator == (const State& rhs) const;
};
typedef std::map<State, int> StateMap;

int GetSign(int x) {
  if (!x)
    return 0;
  return x > 0 ? 1 : -1;
}

int Incr(int x) {
  if (x < 0)
    return x - 1;
  return x + 1;
}

void Dfs(State here, const State& end, int steps) {
  if (steps >= best)
    return;
  if (here == end) {
    best = steps;
    return;
  }
  std::vector<State> adj = here.GetAdj();
  for (int i = 0; i < adj.size(); ++i)
    Dfs(adj[i], end, steps + 1);
}

int Ids(State start, State end, int growthstep) {
  for (int limit = 4; ; limit += growthstep) {
    best = limit + 1;
    Dfs(start, end, 0);
    if (best <= limit)
      return best;
  }
  return -1;
}

int main() {
  return 0;
}
