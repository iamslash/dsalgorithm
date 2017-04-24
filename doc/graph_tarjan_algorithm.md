# intro

  - 무향 그래프에서 절단점을 포함하지 않는 서브그래프를 이중 결합 컴포넌트(biconnected component)
    라고 한다. biconnected component에서 임의의 한 vertex를 지우더라도 vertex간의 연결은
    유지된다.
  - biconnected component는 무향 그래프에서만 정의되지만 강결합
    컴포넌트(strongly connected components)는 방향 그래프에서만
    정의된다.
  - 방향 그래프에서 두 정점 u, v에 대해 양방향으로 가는 경로가 모두
    있을때 두 정점은 scc에 속해 있다고 한다.
  - scc 사이를 연결하는 간선들을 모으면 각 scc들을 정점으로 하는 DAG를
    구성할 수 있다. 이러한 과정을 압축(condensation) 이라고 한다.
  - 한 cycle에 포함된 정점들은 항상 같은 scc에 속해 있다. 반대로 한
    scc에 속한 두 정점 사이를 잇는 양방향 경로를 합치면 두 정점을
    포함하는 사이클이 된다.
  - tarjan algorithm은 그래프를 scc로 분할 하는 방법이다.

# idea


  - spanning tree를 제작한다.
  - (u, v) edge 가 있다. v를 root로 하는 subtree에서 u 혹은 u보다 선조로 
    가는 edge가 없다면 v를 root로 하는 subtree는 scc이다. 
  - stack을 활용해서 scc의 정점들을 구해내자.
  - 아래 그림에서 vertex 3을 처리한다고 해보자. 3은 stack에
    삽입한다. 4를 root로 하는 서브트리는 edge중 발견된 순서가
    최소인 vertex는 4이다. vertex 4이하는 scc이다.
  - vertex 4를 처리한다고 해보자. 4는 stack에 삽입한다. 4와 연결된
    edge가 없다. 4 가 등장 할 때까지 stack에서 pop한다. 새로운 scc를
    구성한다.
  - 다시 vertex 3으로 돌아온다. 현재 stack에는 3이 있다. 3이 등장 할
    때까지 stack에서 pop한다. 새로운 scc를 구성한다.
  
  ![](http://dyewrv1redcbt.cloudfront.net//wp-content/uploads/SCC.png)
