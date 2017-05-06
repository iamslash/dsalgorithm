# intro

- dijkstra, bellman-ford algorithm들은 단일 시작점 최단 경로
  알고리즘들이다. floyd algorithm은 이차원 배열을 이용하여 정점의 모든
  쌍에 대해 경유지를 활용하여 최단 거리를 구하는 알고리즘이다.

# keyword

```
adj[][], via[][], floyd, reconstruct
```

# idea

- k는 경유지, i는 시작점, j는 끝점으로 완전 탐색한다.
- 탐색경로는 전체 경로의 시작점과 끝점 사이에 경유정점을 재귀적으로
  삽입하여 구한다.

# reference

- [floyd in 4 minutes in youtube](https://www.youtube.com/watch?v=4OQeCuLYj-4)
- [floyd in geeksforgeeks](http://www.geeksforgeeks.org/dynamic-programming-set-16-floyd-warshall-algorithm/)
