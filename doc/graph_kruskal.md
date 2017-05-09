# intro

- MST(minimum spanning tree)를 구하는 알고리즘이다.
- unweighted graph의 spanning tree는 원래 graph의 vertex 전부와
  edge의 부분집합으로 구성된 graph이다. 이때 spanning tree에 포함된
  edge들은 vertex들을 tree형태로 전부 연결해야한다.
  tree이기 때문에 cycle은 없다.
- graph의 spanning tree는 여러개 일 수 있다.

# keyword

```cpp
vector<pair<int, int> > adj[], DisjointSet,
kruskal, int totalcost, vector<pair<int, int> > mst,
vector<pair<int, pair<int, int> > > edges
```

# idea

- 간선들을 모두 모아서 가중치의 오름 차순으로 정렬한다.
- 정렬된 간선들을 하나씩 탐사 하면서 간선에 연결된 정점의 쌍이 서로 부모가
  같지 않다면 트리에 추가한다.
- 두 정점이 서로 부모가 같지 않다는 것은 서로 다른 컴포넌트에 속해 있다는 것이다.
- 서로 같은 컴포넌트에 속해 있는데 트리에 추가한다면 사이클이 생길 수 있다.


# complexity

- 간선을 정렬하는 시간이 시간복잡도를 지배한다.
- O(|E|lg|E|)

# reference

- [kruskal algorithm in 2 minutes at youtube](https://www.youtube.com/watch?v=71UQH7Pr9kU)