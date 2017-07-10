# abstract

- n개에서 r개를 순서없이 골라내는 방법과 같다.
- n명중 A그룹에 들어갈 r명을 고르는 가짓수 = 
  B를 무조건 A그룹에 포함하는 경우 + B를 무조건 배제하는 경우 = 
  n-1명 중 r-1명 선정 + n-1명 중 r명 선정을 하는 가짓수 이다.

```latex
\binom{n}{r} = \binom{n-1}{r-1} \binom{n-1}{r}
```

![](dynamic_binomial_coefficient.png)

- 이항계수는 조합과 같다.

```latex
_{n}C_{r} = \frac{n!}{r!(n-r)!}
```

![](dynamic_combination.png)


- n개에서 r개를 순서를 고려하여 골라내는 방법을 순열이라고 한다. 

```latex
_{n}P_{r} = \frac{n!}{(n-r)!}
```

![](dynamic_permutation.png)
