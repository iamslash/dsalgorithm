# intro

- dijkstra algorithm과 같은 단일 시작점 최단 경로
  알고리즘이다. dijkstra algorithm과 달리 음수간선의 경우도 최단 경로를
  구할 수 있다.
- 음수 사이클이 있는 경우는 최단 경로를 구할 수 없다.

# keyword

```
vector<pair<int, int>> adj[], bellmanford, vector<int> upper, bool updated
```

# idea

- 음수 사이클이 있다면 빈 배열을 반환한다.
- 간선을 순회 하면서 최단 경로를 발견하는 과정을 relax라고 한다.
- relax가 없다면 loop을 종료한다.
- 마지막 순회에도 relax가 있다면 음수 사이클이 있다.

# reference

- [bellman-ford in geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-23-bellman-ford-algorithm/)
