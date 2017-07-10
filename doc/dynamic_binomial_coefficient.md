# abstract

- 이항계수에 대해 적는다. 먼저 순열과 조합을 이해해야 한다.

# permutation

- n개에서 r개를 순서를 고려하여 골라내는 방법을 순열이라고 한다. 
  nPr = n x (n-1) x (n-2) x ... x (n-r+1)이다.

```latex
_{n}P_{r} = \frac{n!}{(n-r)!}
```

![](dynamic_permutation.png)

# combination

- n개에서 r개를 순서없이 골라내는 방법과 같다.

```latex
_{n}C_{r} = \frac{n!}{r!(n-r)!}
```

![](dynamic_combination.png)

# binomial coefficient

- 이항계수는 조합과 같다.

```latex
\binom{n}{r} = \binom{n-1}{r-1} \binom{n-1}{r}
```

![](dynamic_binomial_coefficient.png)
