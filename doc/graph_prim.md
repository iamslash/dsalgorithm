# intro

- MST(minimum spanning tree)를 구하는 알고리즘이다.
- unweighted graph의 spanning tree는 원래 graph의 vertex 전부와
  edge의 부분집합으로 구성된 graph이다. 이때 spanning tree에 포함된
  edge들은 vertex들을 tree형태로 전부 연결해야한다.
  tree이기 때문에 cycle은 없다.
- graph의 spanning tree는 여러개 일 수 있다.

# keyword

```cpp
vector<pair<int, int> > adj[],
prim, totalcost, vector<pair<int, int> > mst,
vector<bool> added, vector<int> min_weight, vector<int> parent

```

# idea

- 모든 정점들을 순회한다.
- 순회한 정점에 연결된 간선들의 최소 가중치를 저장한다.
- 저장된 간선들중 가장 최소인 녀석을 골라서 트리에 추가한다.

# complexity

- O(|V|^2+|E|)
- dense graph인 경우 |E| = |V|^2이다. 따라서 시간 복잡도는 O(|V|^2)가 될 수
  있다. kruskal algorithm은 O(|E|lg|E|)이기 때문에
  prim algorithm이 dense graph의 경우 더욱 효율적일 수 있다.

# reference

- [prim algorithm in 2 minutes at youtube](https://www.youtube.com/watch?v=cplfcGZmX7I)