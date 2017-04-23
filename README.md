# Algorithm Proof

- Mathmatical Induction
- Proof by Contradiction
- Direct Proof
- Contrapositive Proof
- Existence Proof
- Proof by Counter Example
- if and only if proof

# Algorithm Analysis

- The RAM Model of Computation
- The asymptotic analysis of worst-case complexity
- notations
  - f(n) = O(g(n)) means c · g(n) is an upper bound on f (n). Thus there exists some constant c such that f (n) is always ≤ c · g(n), for large enough n (i.e. , n ≥ n0 for some constant n0).
  - f(n) = Ω(g(n)) means c · g(n) is a lower bound on f(n). Thus there exists some constant c such that f(n) is always ≥ c · g(n), for all n ≥ n0.
  - f(n) = Θ(g(n)) means c1 · g(n) is an upper bound on f(n) and c2 · g(n) is a lower bound on f(n), for all n ≥ n0. Thus there exist constants c1 and c2 such that f (n) ≤ c1 · g(n) and f (n) ≥ c2 · g(n). This means that g(n) provides a nice, tight bound on f(n).
  - ![Graphic examples of the Θ, O, and Ω notations.](https://raw.githubusercontent.com/iamslash/dsalgorithm/master/_img/Graphic%20examples%20of%20the%20%CE%98%2C%20O%2C%20and%20%E2%84%A6%20notations.jpeg)
  - ![Algorithm Graphs](https://raw.githubusercontent.com/iamslash/dsalgorithm/master/_img/alg_graph.jpeg)


# P, NP, NP Hard, NP Complete

- P
  - P means the existence of an algorithm for the task that runs in polynomial time.
- NP
  - set of decision problems for which any yes instance has some 'proof' that verifies the problem to be yes in polynomial step
- NP Hard
  - A decision problem H is NP-hard when for every problem L in NP,
 there is a polynomial-time reduction from L to H
- NP Complete
  - A decision problem C is NP-complete if:
    - C is in NP, and
    - Every problem in NP is reducible to C in polynomial time.

# Algorithms

- Bitmask
  - bitmask set
    - null set, full set
    - add a element
    - check a element included
    - dell a element
    - toggle a element
    - set operation (added, intersection, removed, toggled)
    - size of set (__builtin_popcount())
    - find a min element (__builtin_ctz())
    - del a min element
    - traversal of set
  - sieve of eratosthenes
  - 15 puzzle
  - priority queue with O(1)
  - maximal stable set
  - [GRADUATION](https://algospot.com/judge/problem/read/GRADUATION)
  - [Bit Twiddling Hacks](http://graphics.stanford.edu/~seander/bithacks.html)

- Partial Sum
  - partial sum, range sum
  - variance
  - grid sum
  - range which is close to zero
  - [CHRISTMAS](https://algospot.com/judge/problem/read/CHRISTMAS)

- Disjoint Set
  - union-find (merge-find)

- List
  - dynamic array
  - singly linked list
  - doubly linked list
  - [JOSEPHUS](https://algospot.com/judge/problem/read/JOSEPHUS)
  - [Dancing Links](https://arxiv.org/abs/cs/0011047)

- Stack 
  - [FENCE](http://algospot.com/judge/problem/read/FENCE)
  - [BRACKETS2](http://algospot.com/judge/problem/read/BRACKETS2)
  - [Longest valid Parentheses](http://www.practice.geeksforgeeks.org/problem-page.php?pid=1247)
  - [Maximum of minimum for every window size](http://www.practice.geeksforgeeks.org/problem-page.php?pid=170)

- Queue
  - [JOSEPHUS](https://algospot.com/judge/problem/read/JOSEPHUS)
  - [ITES](http://algospot.com/judge/problem/read/ITES)
    - online algorithm
    - offline algorithm

- Deque
  - [Level order traversal in spiral form](http://www.practice.geeksforgeeks.org/problem-page.php?pid=700201)

- Map (Hash)
    - seperate chaining
    - linear probing (open addressing)
    - quadratic probing
    - double hashing
    - consistent hashing
    - [A Simple Fraction](http://www.practice.geeksforgeeks.org/problem-page.php?pid=514)

- String
  - search with naive algorithm
  - search with kmp algorithm
    - needle, haystack, begin, matched, pi[]
    - O(|N| + |H|)
  - [NAMING](http://algospot.com/judge/problem/read/NAMING)
  - [PALINDROMIZE](http://algospot.com/judge/problem/read/PALINDROMIZE)
  - [JAEHASAFE](http://algospot.com/judge/problem/read/JAEHASAFE)
  - suffix array
    - [Manber, Udi; Myers, Gene (1990). Suffix arrays: a new method for on-line string searches](http://webglimpse.net/pubs/suffix.pdf)
  - get suffix array using naive algorithm
    - O(N^2lgN)
  - get suffix array using manber myers algorithm
    - sa[], group[], t
    - O(N(lgN)^2)
  - suffix array search
  - circular string
  - the number of different substrings
  - [HABIT](http://algospot.com/judge/problem/read/HABIT)
  - Boyer Moore algorithm
    - [Boyer, Robert S.; Moore, J Strother (October 1977). "A Fast String Searching Algorithm."](https://www.cs.utexas.edu/users/moore/publications/fstrpos.pdf)
  - [Kasai, T. et al., "Linear-Time Longest-Common-Prefix Computation in Suffix Arrays and Its Applications"](http://alumni.cs.ucr.edu/~rakthant/cs234/01_KLAAP_Linear%20time%20LCP.PDF)
    - O(|N| + lg|H|)
  - [Rabin-Karp algorithm](https://en.wikipedia.org/wiki/Rabin%E2%80%93Karp_algorithm)
  - suffix
  - Aho–Corasick algorithm
    - children, fail, terminal, output, insert, compute_fail_func, search

- Tree
  - terms and definitions
    - node, edge
    - parent, child, sibling
    - ancestor, descendant
    - root, leaf
    - depth, height
  - [TRAVERSAL](http://algospot.com/judge/problem/read/TRAVERSAL)
  - [FORTRESS](http://algospot.com/judge/problem/read/FORTRESS)
  - binary search tree
  - red black tree (balanced binary search tree)
  - AVL tree (balanced binary search tree)
  - treap
    - insert, split, erase, merge
  - get kth element
  - get count of elements which are lesser than X
  - [NERD2](http://algospot.com/judge/problem/read/NERD2)
  - [INSERTION](http://algospot.com/judge/problem/read/INSERTION)
  - priority queue with heap
    - push_heap, pop_heap
  - [RUNNINGMEDIAN](http://algospot.com/judge/problem/read/RUNNINGMEDIAN)
  - rmq (range minimum query) with segment tree
  - get two smallest in a range
  - get the maximum frequency of occurrence in the range of ordered sequences
  - [MORDOR](http://algospot.com/judge/problem/read/MORDOR)
  - [FAMILYTREE](http://algospot.com/judge/problem/read/FAMILYTREE)
  - fenwick tree (binary indexed tree)
  - [MEASURETIME](http://algospot.com/judge/problem/read/MEASURETIME)
  - union-find (merge-find)
    - union rank optimization
    - pass compression optimization
  - check the connectivity of a graph
  - track the largest set
  - [EDITORWARS](http://algospot.com/judge/problem/read/EDITORWARS)
  - trie 
    - [pdf](https://raw.githubusercontent.com/iamslash/dsalgorithm/master/_pdf/trie.pdf) [video]()
    - TrieNode, children, terminal, insert, find
    - a tree whose key is a character for searching strings
    - use too much memory
  - triple array trie
    - use less memory than trie
  - suffix trie
    - a trie which saves suffix array but uses too much memeory.
  - suffix tree
    - a tree which saves suffix array and uses less memory. but time complexity of simple algorithm is O(N^2). suffix array is better.
  - radix tree (patricia tree)
    - compress trie like suffix tree.
  - [SOLONG](http://algospot.com/judge/problem/read/SOLONG)
  - Aho–Corasick algorithm
    - children, fail, terminal, insert, fail, output, compute_fail, search
  - [NH](http://algospot.com/judge/problem/read/NH)

- Graph
  - [terms and definitions](doc/graph_terms_and_definitions.md)
    - vertex, edge, directed graph, undirected graph, weighted graph, multi graph, simple graph
    - unrooted tree, bipartite graph, DAG (directed asyclick graph), simple path
    - cycle, circuit, adjacency list, adjacency matrix , sparse graph, dense graph, implicit graph
  - dfs (depth first search)
    - adj, visited, dfs, dfs_all
  - finding out two vertices are connected
    - dfs(u) and find out whether v is visited.
  - counting the number of components 
    - count the number of dfs in dfs_all.
  - [topological sort](doc/graph_topological_sort.md)
    - adj, visited, dfs, dfs_all, order
  - [DICTIONARY](http://algospot.com/judge/problem/read/DICTIONARY)
  - [eulerian circuit](doc/graph_eulerian_circuit.md)
    - adj, circuit, get_eulerian_circuit
  - [eulerian trail](doc/graph_eulerian_trail.md)
    - adj, trail, get_eulerian_circuit, get_eulerian_trail
  - [WORDCHAIN](http://algospot.com/judge/problem/read/WORDCHAIN)
  - [dfs spanning tree](doc/graph_dfs_spanning_tree.md)
    - tree edge, forward edge, back edge, cross edge
    - adj, discovered, finished, counter, dfs_spanning_tree
  - proof of topological sort
  - [check the cycle](doc/graph_check_the_cycle.md)
  - [cut vertex (articulation point)](doc/graph_cut_vertex.md)
    - biconnected components
    - adj, discovered, is_cut_vertex, counter, find_cut_vertex
  - [bridge](doc/graph_bridge.md)
    - adj, discovered, bridge, counter, find_bridge
  - [tarjan's algorithm](doc/graph_tarjan_algorithm.md)
    - scc (strongly connected components)
    - condensation
    - adj, scc_id, discovered, stck, scc_counter, vertex_counter, scc, tarjan_scc
  - [topological sort of scc](doc/graph_topological_sort_of_scc)
  - [GALLERY](http://algospot.com/judge/problem/read/GALLERY)
    - dominating set
    - unrooted tree
  - [MEETINGROOM](http://algospot.com/judge/problem/read/MEETINGROOM)
    - sat (SATisfiability, boolean satisfiability problem)
    - conjunctive normal form
    - 2-sat
    - implication graph
  - bfs (breadth first search)
    - adj, bfs, discovered, q, order
    - O(|V| + |E|) adjacency list
    - O(|V|^2) adjacency matrix
  - [bfs shortest path](doc/graph_bfs_shortest_path.md)
    - adj, get_shortest_path, bfs, distance, parent, q
  - [SORTGAME](http://algospot.com/judge/problem/read/SORTGAME)
  - [CHILDRENDAY](http://algospot.com/judge/problem/read/CHILDRENDAY)
  - [15 puzzle - bfs](doc/graph_15_puzzle_bfs.md)
    - State, get_adj, operator<, operator==, bitmask, move, get, set, swap, get_zero_idx, state_map, bfs
  - [15 puzzle - bfs bidrectional search](doc/graph_15_puzzle_bfs_bs.md)
    - State, get_adj, operator<, operator==, bitmask, move, get, set, swap, get_zero_idx, state_map, get_sign, incr, bfs_bs
  - [15 puzzle - bfs ids (iteratively deep searching)](doc/graph_15_puzzle_bfs_ids.md)
    - State, get_adj, operator<, operator==, bitmask, move, get, set, swap, get_zero_idx, best, dfs, ids
  - [HANOI4](http://algospot.com/judge/problem/read/HANOI4)
  - Dijkstra algorithm
  - Dijkstra algorithm without priority queue
  - [ROUTING](http://algospot.com/judge/problem/read/ROUTING)
  - [FIRETRUCKS](http://algospot.com/judge/problem/read/FIRETRUCKS)
  - [NTHLON](http://algospot.com/judge/problem/read/NTHLON)
  - Bellman-Ford algorithm
  - [TIMETRIP](http://algospot.com/judge/problem/read/TIMETRIP)
  - Floyd algorithm
  - [DRUNKEN](http://algospot.com/judge/problem/read/DRUNKEN)
  - [PROMISES](http://algospot.com/judge/problem/read/PROMISES)
  - Kruskal's minimum spanning tree 
  - Prim's minimum spanning tree
  - [LAN](http://algospot.com/judge/problem/read/LAN)
  - [TPATH](http://algospot.com/judge/problem/read/TPATH)
  - flow network
    - capacity contraint
    - local equilibrium
    - augmenting path
    - flow, capacity, redidual capacity
  - mincut problem
    - find a cut of minimum capacity
  - maxflow problem
    - find a flow of maximum value
  - min-cut max-flow theorem
  - Ford-Fulkerson algorithm
  - Ford-Fulkerson algorithm with adjacency list
  - Edmonds-Karp algorithm
    - ford fulkerson algorithm with bfs
  - [MILEAGE](http://algospot.com/judge/problem/read/MILEAGE)
  - [SAINTTAIL](http://algospot.com/judge/problem/read/SAINTTAIL)
  - [MATCHFIX](http://algospot.com/judge/problem/read/MATCHFIX)
  - [PROJECTS](http://algospot.com/judge/problem/read/PROJECTS)
  - maximum matching problem
    - Edmond's matching algorithm
  - bipartite matching problem
  - [TRAVELPICTURES](http://algospot.com/judge/problem/read/TRAVELPICTURES)
  - [DOMINOS](http://algospot.com/judge/problem/read/DOMINOS)
  - [BISHOPS](http://algospot.com/judge/problem/read/BISHOPS)
  - [TRAPCARD](http://algospot.com/judge/problem/read/TRAPCARD)
    - independent set
    - maximum independent set
  - Dinic algorithm
  - MCMF (min-cost max-flow)
    - successive shortest path algorithm
  - assignment problem
    - Kuhn–Munkres algorithm (hungarian algorithm)
  - vertex cover problem
    - Kőnig's theorem
  - Hopcroft-Karp algorithm

- Sort
  - Selection Sort
  - Isnertion sort
  - Bubble Sort
  - Shell Sort
  - Quicksort
  - Radix Sort
  - Heapsort
  - Merge sort
  - External Sort
  - Binary Tree Sort
  - counting sort

- Search
  - Sequential Search with array
  - Sequential Search with linked list
  - Binary Search with array
  - Interpolation Search
  - Binary Tree Search 
  - Radix Tree Search
  - Radix Trie Search 
  - Hash Table Linear Probing Search
  - Hash Table Seperate Chaining Search
  - B-Tree Search
  - Red-Black Tree Search
  - AVL Tree Search

- Numerical Analysis
  - bisection method
  - [ROOTS](https://algospot.com/judge/problem/read/ROOTS)
  - [LOAN](https://algospot.com/judge/problem/read/LOAN)
  - [RATIO](https://algospot.com/judge/problem/read/RATIO)
  - ternary search
  - [FOSSIL](https://algospot.com/judge/problem/read/FOSSIL)
  - simpson's method

- Number Theory
  - prime number, composite number
  - prime factorization
  - sieve of eratosthenes
  - prime factorization with sive of eratosthenes
  - [PASS486](https://algospot.com/judge/problem/read/PASS486)
  - Euclidean algorithm
  - [POTION](https://algospot.com/judge/problem/read/POTION)
  - modular arithmetic
    - add, sub, mul
    - div
  - extended euclidean algorithm
  - chinese remainder theorem
  - lucas' theorem

- Computational Geometry
  - how much closer
  - dot product
  - cross product
  - line intersection
  - segment intersection
  - segment intersects (counter clock wise)
  - point to line
  - [PINBALL](https://algospot.com/judge/problem/read/PINBALL)
  - polygon area
  - polygon inside
  - [TREASURE](https://algospot.com/judge/problem/read/TREASURE)
  - [NERDS](https://algospot.com/judge/problem/read/NERDS)
  - convex hull (Gift Wrapping)
  - convex hull (Javis's March)
  - convex hull (Graham Scan)
  - plane sweeping, line sweeping
  - segment intersects (Shamos-Hoey)
  - segment intersects (Bentley-Ottmann)
  - rotating calipers
  - spline (bezier spline)
  - spline (hermite spline)
  - spline (B-spline, Basis spline)
  - closest pair of points
  - voronoi diagrams
  - further reading
    - [geometry algorithms](http://geomalgorithms.com/)

# Algorithm Design

- recursion
  - tower of hanoi
  - fibonacci number
  - pick k numbers from n numbers

- Brute Force
  - [BOGGLE](https://algospot.com/judge/problem/read/BOGGLE)
  - [PICNIC](https://algospot.com/judge/problem/read/PICNIC)
  - [BOARDCOVER](https://algospot.com/judge/problem/read/BOARDCOVER)
  - [CLOCKSYNC](https://algospot.com/judge/problem/read/CLOCKSYNC)

- Divide and Conquor
  - Karatsuba
  - [QUADTREE](https://algospot.com/judge/problem/read/QUADTREE)
  - [FENCE](https://algospot.com/judge/problem/read/FENCE)
  - [FANMEETING](https://algospot.com/judge/problem/read/FANMEETING)

- Dynamic programming
  - [JUMPGAME](https://algospot.com/judge/problem/read/JUMPGAME)
  - [WILDCARD](https://algospot.com/judge/problem/read/WILDCARD)
  - [TRIANGLEPATH](https://algospot.com/judge/problem/read/TRIANGLEPATH)
  - [LIS](https://algospot.com/judge/problem/read/LIS)
  - [JLIS](https://algospot.com/judge/problem/read/JLIS)
  - [PI](https://algospot.com/judge/problem/read/PI)
  - [QUANTIZE](https://algospot.com/judge/problem/read/QUANTIZE)
  - [TILING2](https://algospot.com/judge/problem/read/TILING2)
  - [TRIPATHCNT](https://algospot.com/judge/problem/read/TRIPATHCNT)
  - [SNAIL](https://algospot.com/judge/problem/read/SNAIL)
  - [ASYMTILING](https://algospot.com/judge/problem/read/ASYMTILING)
  - [POLY](https://algospot.com/judge/problem/read/POLY)
  - [NUMB3RS](https://algospot.com/judge/problem/read/NUMB3RS)
  - Markov Chain

- Dynamic programming technique
  - [PACKING](https://algospot.com/judge/problem/read/PACKING)
  - [OCR](https://algospot.com/judge/problem/read/OCR)
  - Hidden Markov Model, HMM
  - Viterbi algorithm
  - [programming pearls](https://www.amazon.com/Programming-Pearls-2nd-Jon-Bentley/dp/0201657880/ref=sr_1_1?s=books&ie=UTF8&qid=1473590537&sr=1-1&keywords=programming+pearls)
  - [MORSE](https://algospot.com/judge/problem/read/MORSE)
  - [KLIS](https://algospot.com/judge/problem/read/KLIS)
  - [DRAGON](https://algospot.com/judge/problem/read/DRAGON)
  - [ZIMBABWE](https://algospot.com/judge/problem/read/ZIMBABWE)
  - [RESTORE](https://algospot.com/judge/problem/read/RESTORE)
  - [TICTACTOE](https://algospot.com/judge/problem/read/TICTACTOE)
  - [NUMBERGAME](https://algospot.com/judge/problem/read/NUMBERGAME)
  - [BLOCKGAME](https://algospot.com/judge/problem/read/BLOCKGAME)
  - [SUSHI](https://algospot.com/judge/problem/read/SUSHI)
  - [GENIUS](https://algospot.com/judge/problem/read/GENIUS)

- Greedy
  - [MATCHORDER](https://algospot.com/judge/problem/read/MATCHORDER)
  - [LUNCHBOX](https://algospot.com/judge/problem/read/LUNCHBOX)
  - [STRJOIN](https://algospot.com/judge/problem/read/STRJOIN)
  - huffman code
  - [MINASTIRITH](https://algospot.com/judge/problem/read/MINASTIRITH)

- Combinatorial Search
  - back tracking
  - TSP (dynamic programming)
  - TSP (exhaustive search)
  - TSP (simple heuristic)
  - TSP (greedy)
  - TSP (MST heuristic)
  - TSP (memoization)
  - [BOARDCOVER2](https://algospot.com/judge/problem/read/BOARDCOVER2)
  - [ALLERGY](https://algospot.com/judge/problem/read/ALLERGY)
  - [KAKURO2](https://algospot.com/judge/problem/read/KAKURO2)
  - [Artificial Intelligence: A Modern Approach](https://www.amazon.com/Artificial-Intelligence-Modern-Approach-3rd/dp/0136042597)
  - [sudoku](http://norvig.com/sudoku.html)
    - [sudoku-kor](https://github.com/jongman/articles/wiki/solving-every-sudoku-puzzle)
  - [Georgia Tech's TSP](http://www.tsp.gatech.edu/)

- optimization problems to Decision problems
  - [DARPA](https://algospot.com/judge/problem/read/DARPA)
  - [ARCTIC](https://algospot.com/judge/problem/read/ARCTIC)
  - [CANADATRIP](https://algospot.com/judge/problem/read/CANADATRIP)
  - [WITHDRAWAL](https://algospot.com/judge/problem/read/WITHDRAWAL)

- Randomized
  - 
- Genetics
  - 
  
# References

## Video

- [c++로 배우는 알고리즘 동영상](https://www.youtube.com/watch?v=mzM3S5FtKuw&list=PLl5LpJCoD2mCIRn0Fkt8z07EK320ZmHgY)
- [Sedgewick Algorithms I](https://www.youtube.com/user/algorithmscourses/playlists?shelf_id=2&view=50&sort=dd)
- [Sedgewick Algorithms II](https://www.youtube.com/user/algorithmscourses/playlists?flow=list&shelf_id=3&view=50)
- [michael sambol short videos](https://www.youtube.com/channel/UCzDJwLWoYCUQowF_nG3m5OQ)
- [Curtis Lassam short videos](https://www.youtube.com/watch?v=r4r1DZcx1cM&list=PLmVb1OknmNJuC5POdcDv5oCS7_OUkDgpj&index=22)
  - trie, bloom filters, Endainness, scrum

## Book

- [알고리즘 문제해결 전략](http://book.algospot.com/problems.html)
- [c로 배우는 알고리즘](http://www.yes24.com/24/goods/18005?scode=032&OzSrank=1)
- [Algorithms 4th Edition by Robert Sedgewick and Kevin Wayne](http://algs4.cs.princeton.edu/home/)
- [The Algorithm Design Manual 2nd Edition by Steven S Skiena](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1848000693/ref=sr_1_1?s=books&ie=UTF8&qid=1460283355&sr=1-1&keywords=the+algorithm+design+manual)
- [Data Structures and Algorithm Analysis in C 2nd Edition by Mark A. Weiss ](https://users.cs.fiu.edu/~weiss/)
- [Introduction to Algorithms, 3rd Edition (MIT Press)](http://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844/ref=sr_1_1?s=books&ie=UTF8&qid=1460283565&sr=1-1&keywords=introduction+to+algorithms)

## Practice

- [cracking the coding interview](https://www.amazon.com/Cracking-Coding-Interview-Programming-Questions/dp/0984782850/ref=zg_bs_132570011_1?_encoding=UTF8&psc=1&refRID=3XW52MQJXCEJEWNTYJQ4)
- [leetcode](https://leetcode.com/)
- [geekforgeeks](http://www.practice.geeksforgeeks.org/)
- [algospot](https://algospot.com/)
- [baekunonline](https://www.acmicpc.net/)
- [hackerrank](https://www.hackerrank.com/)
- [programming-challnges](http://www.programming-challenges.com/)
