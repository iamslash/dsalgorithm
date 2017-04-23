# intro

  - 0부터 15까지 숫자가 배치된 퍼즐을 생각한다. 
  - 0은 빈칸을 의미한다.
  - 0은 상하좌우 4방향으로 움직일 수 있다. 0이 움직이면 0보다 큰 숫자와 교체된다.
  - 0이 움직일때마다 퍼즐의 상태가 변경된다. 
    
# idea

  - uint64_t는 64비트 이므로 4비트씩 16그룹으로 퍼즐의 상태를 표현 할 수 있다.
  - 퍼즐의 상태를 state space라고 한다.
  - src state space에서 dst state space로 bfs탐색을 
    하여 거리를 계산하면 15 puzzle 문제를 해결 할 수 있다.
  - 시간이 오래걸린다. bidirectional search 혹은 iterative deep search를 
    이용하여 최적화 할 수 있다.
