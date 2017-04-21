# intro

  - dfs spanning tree를 제작하면서 backward edge가 존재하면 cycle이
    존재한다.

# idea

  - dfs(u)는 u에서 갈 수 있는 정점들을 모두 방문한 후에야
    종료한다. 따라서 dfs는 cycle에서 u이전에 있는 정점을 dfs(u)가
    종료하기 전에 방문하게된다. 그러면 이 정점에서 u로 가는 간선은
    backward edge가 된다.