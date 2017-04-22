// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>

int N = 5;

class State {
 public:
  std::vector<State> GetAdj() const;
  bool operator < (const State& rhs) const;
  bool operator == (const State& rhs) const;
};
typedef std::map<State, int> StateMap;

int bfs(State start, State end) {
  if (start == end)
    return 0;
  StateMap sm;
  std::queue<State> q;
  q.push(start);
  sm[start] = 0;
  while (!q.empty()) {
    State here = q.front();
    q.pop();
    int cost = sm[here];
    std::vector<State> adj = here.GetAdj();
    for (int i = 0; i < adj.size(); ++i) {
      State there = adj[i];
      if (sm.count(there) == 0) {
        if (there == end)
          return cost + 1;
        sm[there] = cost + 1;
        q.push(there);
      }
    }
  }
  return -1;
}

int main() {
  return 0;
}
