# abstract

- recursive function의 매개변수가 integer가 아닐때 어떻게 integer로
  변환하여 memoization을 할 수 있는지에 대해 적는다.
  
# 연관 배열 사용하기

- vector<int>를 키로 갖는 map을 이용할 수 있다.

```
std::map<std::vector<int>, int> CACHE;
```

# bijection function

- 주어지는 정수배열이 항상 [1, n]범위의 수라고 하자.
  정수배열의 종류는 n!이다. 정수 배열을 integer로
  변환해서 사용하자.

```cpp
int CACHE[N_FACTORIAL]
int map_func(const vector<int>& key);
inf solve(const vector<int>& key) {
    // base condition
    ...
    // memoization
    int& r = CACHE[map_func(key)];
    // recursion
    ...
    return r;
}
```

# boolean array parameters

- 길이 n인 boolean array는 가짓수가 2^n이다. 십진수로 변환하면
  [0, 2^n - 1]이다.

# permutation parameters

- 배열 X가 항상 [1,2,...,10]의 순열이라고 하자. 순열을 바로 숫자로
  표현하면 CACHE의 공간의 낭비가 심각하니 몇번째 순열인지 계산하는
  bijection function을 제작하자.

```cpp
// factorials[i] = i!
int factorials[12];
int get_idx(const std::vector<int>& X) {
    int r = 0;
    for (int i = 0; i < X.size(); ++i) {
        int less = 0;
        //
        for (int j = i + 1; j < X.size(); ++j) {
            if (X[j] < X[i])
                ++less;
        }
        r += factorials[X.size() - i - 1] * less;
    } 
    return r;
}
```

# 입력의 범위가 좁을 경우

- 길이 5인 정수 배열의 각 값이 [0, 9]범위 속한다고 하면 각위치의
  숫자들을 늘어 놓으면 십진수 하나에 일대일 대응된다. 배열의 길이가
  n이고 배열의 원소가 [0, k-1]범위에 들어간다면 이것은 n자리의 k진수로
  변환할 수 있다.
