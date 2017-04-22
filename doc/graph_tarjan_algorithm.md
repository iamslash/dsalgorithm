# intro

  - biconnected component는 무향 그래프에서만 정의되지만
    강결합 컴포넌트(strongly connected components)는
    방향 그래프에서만 정의된다.
  - 방향 그래프에서 두 정점 u, v에 대해 양방향으로 가는 경로가
    모두 있을때 두 정점은 scc에 속해 있다고 한다.
  - scc 사이를 연결하는 간선들을 모으면 각 scc들을 정점으로 하는
    DAG를 구성할 수 있다. 이러한 과정을 압축(condensation)
    이라고 한다.
  - 한 cycle에 포함된 정점들은 항상 같은 scc에 속해 있다. 반대로
    한 scc에 속한 두 정점 사이를 잇는 양방향 경로를 합치면 두 정점을
    포함하는 사이클이 된다.
  - tarjan algorithm은 그래프를 scc로 분할 하는 방법이다.

# idea