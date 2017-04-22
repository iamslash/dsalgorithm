# intro

  - 특정 정점과 인접한 간선들을 모두 지우면 컴포넌트가 두개 이상으로 나뉘어진다
    그 특정 정점을 절단점(cut vertex)라고 한다.
  - 무향 그래프에서 절단점을 포함하지 않는 서브그래프를 이중 결합 컴포넌트(biconnected component)
    라고 한다. biconnected component에서 임의의 한 vertex를 지우더라도 vertex간의 연결은
    유지된다.

# idea

  - 무향 그래프에서 고민해보자. 무향 그래프는 cross edge가 없다.
    forward, back edge는 서로 구분이 없다.
  - root node는 자식이 두개 이상이어야 cut vertex가 될 수 있다. 자식이 한개라면 root와
    인접한 간선을 지워봐야 두개 이상의 컴포넌트로 나뉘어 지지 않는다.
  - v의 back edge들의 terminal node중 u보다 먼저 발견된 vertex가 있다면
    u는 cut vertex가 될 수 없다. 발견 순서를 고려해야 하기 때문에 discovered[]을 이용한다.
  - v의 back edge들의 terminal node중 발견 순서가 최소인 것을 구해서 u의 발견 순서와 비교한다.
  - cross edge는 없기 때문에 finished[]는 필요 없다.

  ![](http://dyewrv1redcbt.cloudfront.net//wp-content/uploads/ArticulationPoints4.png)