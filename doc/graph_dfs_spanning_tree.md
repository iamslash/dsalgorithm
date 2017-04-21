# intro

  - 그래프를 dfs로 순회했을때 만들어지는 트리
  - 4가지 형태의 간선이 존재한다.
    - tree edge
      - 스패닝 트리에 포함된 간선
    - forward edge
      - 스패닝 트리의 선조에서 자손으로 연결되었지만 트리 간선이 아닌 간선
    - back edge
      - 스패닝 트리의 자손에서 선조로 연결되는 간선
    - cross edge
      - tree, forward, back edge가 아닌 간선
  - 무향 그래프는 다음과 같은 특징이 있다.
    - 모든 간선이 양방향으로 통행 가능하므로 cross edge가 존재 할 수 없다.
    - forward edge, back edge의 구분이 없다.

# idea

  - dfs를 수행하면서 간선의 종류를 구분하자.
  - (u, v)가 forward edge라면 v는 u의 자손이어야 한다. 따라서 v는 u보다 늦게 발견되야
    한다.
  - (u, v)가 backward edge라면 v는 u의 선조이어야 한다. 따라서 v는 u보다 일찍 발견되야 한다.
  - (u, v)가 cross edge라면 dfs(v)가 종료한 후 dfs(u)가 호출되야 한다. 따라서 v는 v보다 일찍 발견되어야 한다.