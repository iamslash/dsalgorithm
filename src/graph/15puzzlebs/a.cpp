// Copyright (C) 2016 by iamslash

#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <cstdlib>

int N = 5;

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

int BiBfs(State start, State end) {
  if (start == end)
    return 0;
  StateMap sm;
  std::queue<State> q;
  q.push(start);
  sm[start] = 1;
  q.push(end);
  sm[end] = -1;
  while (!q.empty()) {
    State here = q.front();
    q.pop();
    std::vector<State> adj = here.GetAdj();
    for (int i = 0; i < adj.size(); ++i) {
      State there = adj[i];
      auto it = sm.find(there);
      if (it == sm.end()) {
        sm[there] = Incr(sm[here]);
        q.push(there);
      } else if (GetSign(it->second) != GetSign(sm[here])) {
        return abs(it->second) + abs(sm[here]) - 1;
      }
    }
  }
  return -1;
}

int main() {
  return 0;
}
