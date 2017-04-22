# intro

  - dfs spanning tree를 제작하면서 back edge가 존재하면 cycle이
    존재한다. (u, v)가 back edge라면 u가 v의 자손이다. 자손에서 선조로
    가는 간선이 존재한다는 얘기이다. 이것은 cycle이다.

# idea

  - dfs spanning tree를 제작한다. back edge가 한개이상 존재함녀 cycle이 존재하는 것이다.