# Algorithm Proof

- Counter Example
- Mathmatical Induction
- Contradiction

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
  - Bitmask set
  - maximal subset
  - [GRADUATION](https://algospot.com/judge/problem/read/GRADUATION)
  - [Bit Twiddling Hacks](http://graphics.stanford.edu/~seander/bithacks.html)

- Partial Sum
  - [CHRISTMAS](https://algospot.com/judge/problem/read/CHRISTMAS)
  
- List
  - [JOSEPHUS](https://algospot.com/judge/problem/read/JOSEPHUS)
  - [Dancing Links](https://arxiv.org/abs/cs/0011047)

- Stack 
  - [BRACKETS2](http://algospot.com/judge/problem/read/BRACKETS2)

- Queue, deque
  - [FENCE](http://algospot.com/judge/problem/read/FENCE)
  - [ITES](http://algospot.com/judge/problem/read/ITES)

- String
  - Boyer Moore algorithm
    - [Boyer, Robert S.; Moore, J Strother (October 1977). "A Fast String Searching Algorithm."](https://www.cs.utexas.edu/users/moore/publications/fstrpos.pdf)
  - KMP algorithm
  - [NAMING](http://algospot.com/judge/problem/read/NAMING)
  - [PALINDROMIZE](http://algospot.com/judge/problem/read/PALINDROMIZE)
  - [JAEHASAFE](http://algospot.com/judge/problem/read/JAEHASAFE)
  - suffix array
    - [Manber, Udi; Myers, Gene (1990). Suffix arrays: a new method for on-line string searches](http://webglimpse.net/pubs/suffix.pdf)
  - [HABIT](http://algospot.com/judge/problem/read/HABIT)
  - [Kasai, T. et al., "Linear-Time Longest-Common-Prefix Computation in Suffix Arrays and Its Applications"](http://alumni.cs.ucr.edu/~rakthant/cs234/01_KLAAP_Linear%20time%20LCP.PDF)
  - [Rabin-Karp algorithm](https://en.wikipedia.org/wiki/Rabin%E2%80%93Karp_algorithm)
  - Aho–Corasick algorithm

- Hash
  - seperate chaining
  - quadratic probing

- Tree
  - [TRAVERSAL](http://algospot.com/judge/problem/read/TRAVERSAL)
  - [FORTRESS](http://algospot.com/judge/problem/read/FORTRESS)
  - binary search tree
  - red black tree
  - AVL tree
  - treap
  - [NERD2](http://algospot.com/judge/problem/read/NERD2)
  - [INSERTION](http://algospot.com/judge/problem/read/INSERTION)
  - priority queue with heap
  - [RUNNINGMEDIAN](http://algospot.com/judge/problem/read/RUNNINGMEDIAN)
  - segment tree
    - range minimum query (RMQ)
  - [MORDOR](http://algospot.com/judge/problem/read/MORDOR)
  - [FAMILYTREE](http://algospot.com/judge/problem/read/FAMILYTREE)
  - fenwick tree  
  - [MEASURETIME](http://algospot.com/judge/problem/read/MEASURETIME)
  - union-Find (merge-find)
  - [EDITORWARS](http://algospot.com/judge/problem/read/EDITORWARS)
  - trie  
  - suffix trie
  - radix tree (patricia tree)
  - suffix tree  
  - [SOLONG](http://algospot.com/judge/problem/read/SOLONG)
  - Aho–Corasick algorithm
  - [NH](http://algospot.com/judge/problem/read/NH)

- Graph
  - adjacency list graph
  - adjacency matrix graph
  - depth first search (DFS)
  - [DICTIONARY](http://algospot.com/judge/problem/read/DICTIONARY)
  - [WORDCHAIN](http://algospot.com/judge/problem/read/WORDCHAIN)
  - [GALLERY](http://algospot.com/judge/problem/read/GALLERY)
  - [MEETINGROOM](http://algospot.com/judge/problem/read/MEETINGROOM)
  - Eulerian circuit
  - breadth first search (BFS)
  - [SORTGAME](http://algospot.com/judge/problem/read/SORTGAME)
  - [CHILDRENDAY](http://algospot.com/judge/problem/read/CHILDRENDAY)
  - [HANOI4B](http://algospot.com/judge/problem/read/HANOI4B)
  - Dijkstra algorithm
  - [ROUTING](http://algospot.com/judge/problem/read/ROUTING)
  - [FIRETRUCKS](http://algospot.com/judge/problem/read/FIRETRUCKS)
  - [NTHLON](http://algospot.com/judge/problem/read/NTHLON)
  - [TIMETRIP](http://algospot.com/judge/problem/read/TIMETRIP)
  - [DRUNKEN](http://algospot.com/judge/problem/read/DRUNKEN)
  - [PROMISES](http://algospot.com/judge/problem/read/PROMISES)
  - Bellman-Ford algorithm
  - Kruskal's minimum spanning tree 
  - [LAN](http://algospot.com/judge/problem/read/LAN)
  - [TPATH](http://algospot.com/judge/problem/read/TPATH)
  - Prim's minimum spanning tree
  - Ford-Fulkerson algorithm
  - [MATCHFIX](http://algospot.com/judge/problem/read/MATCHFIX)
  - [PROJECTS](http://algospot.com/judge/problem/read/PROJECTS)
  - [BISHOPS](http://algospot.com/judge/problem/read/BISHOPS)
  - [TRAPCARD](http://algospot.com/judge/problem/read/TRAPCARD)
  - Edmonds-Karp algorithm
  - Dinic algorithm
  - min-cost max-flow (MCMF)
  - successive shortest path
  - Kuhn–Munkres algorithm
  - Kőnig's theorem

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
  - [PASS486](https://algospot.com/judge/problem/read/PASS486)
  - Euclidean algorithm
  - [POTION](https://algospot.com/judge/problem/read/POTION)
  - modular arithmetic
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

- Back Tracking

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
- [c++로 배우는 알고리즘 동영상](https://www.youtube.com/watch?v=mzM3S5FtKuw&list=PLl5LpJCoD2mCIRn0Fkt8z07EK320ZmHgY)
- [알고리즘 문제해결 전략](http://book.algospot.com/problems.html)
- [c로 배우는 알고리즘](http://www.yes24.com/24/goods/18005?scode=032&OzSrank=1)
- [The Algorithm Design Manual 2nd Edition by Steven S Skiena](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1848000693/ref=sr_1_1?s=books&ie=UTF8&qid=1460283355&sr=1-1&keywords=the+algorithm+design+manual)
- [Data Structures and Algorithm Analysis in C 2nd Edition by Mark A. Weiss ](http://www.amazon.com/Data-Structures-Algorithm-Analysis-2nd/dp/0201498405/ref=sr_1_sc_1?s=books&ie=UTF8&qid=1460283476&sr=1-1-spell&keywords=datastructures+and+algorithms+analysis+in+c)
- [Introduction to Algorithms, 3rd Edition (MIT Press)](http://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844/ref=sr_1_1?s=books&ie=UTF8&qid=1460283565&sr=1-1&keywords=introduction+to+algorithms)
