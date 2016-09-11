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
 - ![Graphic examples of the Θ, O, and Ω notations.](https://raw.githubusercontent.com/iamslash/dsalgorithm/master/img/Graphic%20examples%20of%20the%20%CE%98%2C%20O%2C%20and%20%E2%84%A6%20notations.jpeg)
 - ![Algorithm Graphs](https://raw.githubusercontent.com/iamslash/dsalgorithm/master/img/alg_graph.jpeg)


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

# Data Structures

- list
- stack 
- queue
- priority queue
- tree
- graph

# Algorithms

- Numerical Problems
 - Solving Linear Equations
- Combinatorial Problems
- Graph Problems: Polynomial-Time
- Graph Problems: Hard Problems
- Computational Geometry
 - how much closer
 - dot product
 - cross product
 - line intersection
 - segment intersection
 - segment intersects
 - point to line
 - PINBALL
 - polygon area
 - polygon inside
 - TREASURE
 - NERDS
 - convex hull
  - Gift wrapping algorithm
  - Graham Scan
 - plane sweeping, line sweeping
 - rotating calipers
- Set and String Problems

# Algorithm Design

- Brute Force
- Backtracking
- Divide and Conquor
- Dynamic programming
- Greedy
- Randomized
- Genetics

# References

- [The Algorithm Design Manual 2nd Edition by Steven S Skiena](http://www.amazon.com/Algorithm-Design-Manual-Steven-Skiena/dp/1848000693/ref=sr_1_1?s=books&ie=UTF8&qid=1460283355&sr=1-1&keywords=the+algorithm+design+manual)
- [Data Structures and Algorithm Analysis in C 2nd Edition by Mark A. Weiss ](http://www.amazon.com/Data-Structures-Algorithm-Analysis-2nd/dp/0201498405/ref=sr_1_sc_1?s=books&ie=UTF8&qid=1460283476&sr=1-1-spell&keywords=datastructures+and+algorithms+analysis+in+c)
- [Introduction to Algorithms, 3rd Edition (MIT Press)](http://www.amazon.com/Introduction-Algorithms-3rd-MIT-Press/dp/0262033844/ref=sr_1_1?s=books&ie=UTF8&qid=1460283565&sr=1-1&keywords=introduction+to+algorithms)
