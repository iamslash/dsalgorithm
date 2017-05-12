# intro

- matching
  - 그래프에서 끝점을 공유하지 않는 간선의 집합
- maximum matching problem
  - 가장 큰 matching을 찾는 문제. 흔히 매칭 문제라고 한다.
- Edmonds' matching algorithm
  - 모든 그래프에서 maximum matching 을 찾는 알고리즘
  - 복잡하고 까다롭다.
- bipartite graph
  - 정점을 두 그룹으로 나눠서 모든 간선이 서로 다른 그룹의 정점들을
    연결할 수 있는 그래프들을 이분 그래프라고 한다.
- bipartite matching problem
  - bipartite graph에서 maxium matching을 찾는 문제
  - ford fulkerson algorithm을 이용해서 해결할 수 있다.
    조금 더 단순한 구현으로 접근 할 수 있다.

# keyword

```cpp
bool adj[][], vector<int> amatch, vector<int> bmatch, vector<bool>visited
dfs, bipartie_match
```

# idea

- bipartite graph에서 왼쪽에 있는 정점들을 그룹 A,
  오른쪽에 있는 정점들을 그룹 B라고 하자.
- 그룹A의 왼쪽에 source를 추가하고, 그룹B의 오른쪽에 sink를 추가한다.
- source에서 A의 모든 정점으로 간선을 연결하고, B의 모든 정점에서 sink로
  간선을 연결하면 flow network를 만들 수 있다.
  모든 간선은 capacity가 1이다.
- maximum flow를 구한뒤 유량이 흐르는 간선들을 모으면
  maximum matching이 된다.  

# complexity

- O(|V||E|)

# reference

- [maximum bipartite matching in geeksforgeeks](http://www.geeksforgeeks.org/maximum-bipartite-matching/)