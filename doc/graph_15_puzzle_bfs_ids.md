# intro

  - bfs는 space complexity가 너무 크다.
  - dfs를 이용하면 space complexity를 줄일 수 있다.
  - 하지만 dfs는 깊이 우선으로 탐색 하기 때문에 탐색 범위를 점점 넓혀
    가면서 탐색 할 필요가 있다. end state 가 탐색 공간 중간에 있다면 
    효율적이다.
  - 탐색 범위를 점점 넓혀 간다고 해서 iteratively deep searching이라고 한다.
# idea

  - dfs를 limit를 늘려가면서 수행한다. 탐색 범위를 넓히는 것이다.
  - best를 설정하여 best가 limit보다 작거나 같으면 종료한다.
