# intro

- 가중치 그래프의 경우 최단 경로를 구하는 알고리즘이다. 이때 가중치는
  양수이어야 한다. 음수 가중치의 경우 bellman ford 알고리즘을 사용할
  수 있다. 가중치가 없다면 bfs로 충분하다.
- 특정 정점에서 나머지 정점들로 방문하는 최단 거리를 계산한다.

# idea

- 우선순위 큐에서 하나씩 꺼내어 지금 정점까지의 거리보다 작은 경로가 존재한다면 무시한다.
- 우선순위 큐를 사용한다. 우선순위 큐에 std::pair<특정정점에서
  지금정점까지거리, 지금정점>을 삽입한다. 거리는 -1을 곱하여
  저장한다. 우선순위 큐는 기본적으로 내림차순이다. 거리가 작은 녀석이
  우선순위가 높아야 한다.
- 지금정점의 인접한 정점들 즉 미래정점들 중에 미래정점들까지 거리보다 작은
  경로가 존재하지 않는다면 미래정점들을 우선선위 큐에 삽입한다. 이때
  거리는 -1을 곱하여 저장한다.

<iframe width="560" height="315" src="https://www.youtube.com/embed/gdmfOwyQlcI" frameborder="0" allowfullscreen></iframe>

# outro

- 시간 복잡도는 O(|E|lg|V|)이다. 간선의 개수만큼 방문 하고 정점의 개수
  만큼 우선순위 큐 정렬이 필요하기 때문이다.
- 피보나치 힙 혹은 이진 검색 트리를 이용하여 O(|V|lg|V|)에 구현할 수
  있다. 하지만 구현이 복잡하거나 실제로 작성해 보면 속도가 더 느린
  경우가 많아 쉽지 않다.

# reference

- [dijkstra in geeksforgeeks](http://www.geeksforgeeks.org/greedy-algorithms-set-6-dijkstras-shortest-path-algorithm/)
