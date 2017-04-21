# intro

  - euler circuit처럼 모든 간선을 지나지만 시작점과 끝점이 다른 경로

# idea

  - 정점 a, b의 euler trail은 (a, b) 간선을 하나 만들고 euler
    circuit을 구한 다음 (a, b)의 간선을 지우면 된다.
  - a, b는 홀수점 이고 나머지는 짝수점이어야 한다.