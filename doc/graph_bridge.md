# intro

  - 무향 그래프에서 고민해보자. 무향 그래프는 cross edge가 없다. forward, back edge는 서로 같다.
  - 특정 간선을 삭제 했을때 그 간선을 포함하던 컴포넌트가 두개의 컴포넌트로 쪼개질 경우
    언급한 간선을 bridge라고 한다.

# idea

  - bridge는 tree edge일 수 밖에 없다. (u, v)가 forward, back edge라면 u와
    v를 잇는 또 다른 경로가 있다는 것이다. tree edge들에 대해서만 bridge판정을 해야 한다.
  - u가 v의 부모라고 하자. tree edge (u, v)가 bridge이기 위해서는 v를 루트로 하는
    서브트리와 이 외의 점들을 연결하는 유일한 간선이 (u, v)이어야 한다.
  - (u, v)를 제외한 back edge로 u보다 먼저 발견된 vertex에 갈 수 없을 경우 (u, v)
    는 bridge이다.

  ![](http://dyewrv1redcbt.cloudfront.net//wp-content/uploads/Bridge2-300x176.png)