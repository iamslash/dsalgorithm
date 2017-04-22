# intro

  - 그래프를 dfs로 순회했을때 만들어지는 트리. 트리를 구성하는 트리 간선을 포함해서
    총 4가지 종류의 간선을 발견할 수 있다.
    - tree edge
      - 스패닝 트리에 포함된 간선
    - forward edge
      - 스패닝 트리의 선조에서 자손으로 연결되었지만 트리 간선이 아닌 간선
    - back edge
      - 스패닝 트리의 자손에서 선조로 연결되는 간선
    - cross edge
      - tree, forward, back edge가 아닌 간선
  - 무향 그래프는 다음과 같은 특징이 있다.
    - 모든 간선이 양방향으로 통행 가능하므로 cross edge가 존재 할 수 없다???
    - forward edge, back edge의 구분이 없다???

# idea

  - dfs를 수행하면서 간선의 종류를 구분하자.
  - 최초 만나는 간선은 tree edge다. dfs spanning트리를 구성하니까.
  - (u, v)가 tree edge가 아니면서 v가 u보다 나중에 발견된다면 (u, v)는 forward edge이다.
    dfs알고리즘을 생각해 보면 v는 u의 자손이기 때문이다.
  - (u, v)가 tree edge, forward edge가 아니면서 v가 아직 dfs가 종료되지 않았다면 (u, v)는
    back edge이다. dfs(v)가 아직 종료되지 않았다면 dfs(u)역시 아직 종료되지 않았을테니
    u는 v의 선조가 되기 때문이다. 
  - (u, v)가 tree, forward, back edge가 아니라면 (u, v)는 cross edge이다.
    u는 v의 선조도 아니고 v는 u의 자손도 아니다.