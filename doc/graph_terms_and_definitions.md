- vertex, edge

- directed graph

- undirected graph

- weighted graph

- multi graph
  - 두 vertex사이에 두개 이상의 edge가 존재하는 graph

- simple graph
  - 두 vertex사이에 한개의 edge만 존재하는 graph

- unrooted tree

![](https://www.ncbi.nlm.nih.gov/Class/NAWBIS/Modules/Phylogenetics/images/phylo1002.gif)

- bipartite graph

  - 그래프의 정점들을 겹치지 않는 두개의 그룹으로 나눠서 서로 다른
    그룹에 속한 정점들 간에만 간선이 존재하도록 만들 수 있는 그래프

![](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/Simple-bipartite-graph.svg/220px-Simple-bipartite-graph.svg.png)

- DAG (directed asyclick graph)
  - 방향그래프 이면서 사이클이 없는 그래프
  
![](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Topological_Ordering.svg/220px-Topological_Ordering.svg.png) 

- simple path
  - 한 정점을 최대 한번만 지나는 경로

- cycle, circuit
  - 시작한 점에서 끝나는 경로

- adjacency list 
  - vector<list<bool> > adj;
  - O(|V|^2) 크기의 공간을 갖는다.

- adjacency matrix 
  - vector<vector<bool> > adj;
  - O(|V| + |E|) 크기의 공간을 갖는다.

- sparse graph
  - edge의 수가 |V|^2에 비해 훨씬 적은 그래프

- dense graph
  - edge의 수가 |V|^2에 비례 하는 그래프

- implicit graph
