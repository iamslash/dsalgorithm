# intro

  - state를 정점으로 그래프를 구성하고 start state에서 end state으로 bfs를 수행한다고 하자.
  - start state과 end state에서 각각 출발하여 중간에서 만날때 탐색 경로를 획득 할 수 있다.
  - 이 것을 양방향 탐색(bidirectional search)이라고 한다. 

# idea

  - start state에서 출발한 bfs의 cost는 양의 부호값으로 한다.
    end state에서 출발한 bfs의 cost는 음의 부호로 한다.
    양방향 탐색이 중간에서 만나면 양쪽의 abs(cost)리턴 한다.
