
## itertools
- 반복되는 형태의 데이터 처리에 유용
- 특히 순열과 조합 라이브러리가 유용함.

### 순열
- 서로 다른 n개에서 서로 다른 r개를 뽑아 **순서대로** 나열
```py
from itertools import permutations

data = ['A', 'B', 'C']

result = list(permutations(data, 3))
print(result) # [('A', 'B', 'C'), ('A', 'C', 'B'), ('B', 'A', 'C'), ('B', 'C', 'A'), ('C', 'A', 'B'), ('C', 'B', 'A')]
```
- 중복 순열
```py
from itertools import product

data = ['A', 'B', 'C']

result = list(product(data, repeat=2)) # 2개를 뽑는 모든 순열 구하기 (중복 허용)
print(result) # [('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'B'), ('B', 'C'), ('C', 'A'), ('C', 'B'), ('C', 'C')]
```

### 조합
- 서로 다른 n개에서 **순서에 상관 없이** r개를 선택
```py
from itertools import combinations

data = ['A', 'B', 'C']

result = list(combinations(data, 2))
print(result) # [('A', 'B'), ('A', 'C'), ('B', 'C')]
```
- 중복 조합
```py
from itertools import combinations_with_replacement

data = ['A', 'B', 'C']

result = list(combinations_with_replacement(data, 2)) # 2개를 뽑는 모든 조합 구하기 (중복 허용)
print(result) # [('A', 'A'), ('A', 'B'), ('A', 'C'), ('B', 'B'), ('B', 'C'), ('C', 'C')]
```

## heapq
- 힙 자료구조 제공
- 우선순위 큐 기능 구현을 위해 사용

## bisect
- 이진 탐색 기능 제공

## collections
- deque(덱), counter(카운터) 등의 자료구조 포함

### counter
- 등장 횟수를 세는 기능
- 리스트와 같이 반복 가능한 객체에서 **내부 원소가 몇 번씩 등장했는지** 알려줌
```Py
from collections import Counter

counter = Counter(['red', 'blue', 'red', 'green', 'blue', 'blue', 'blue'])

print(counter['blue'])  # 4
print(counter['red'])   # 2
print(counter['green']) # 1
print(dict(counter)) # dict로 자료형 변환! {'red': 2, 'blue': 4, 'green': 1}
```

## math
- 필수적인 수학적 기능
- 팩토리얼, 제곱근, GCD, pi ...

## 자주 사용되는 내장 함수
- eval() : 문자열의 수식을 계산해버림

```python
result = eval("(3+5)*7")
print(result) # 56
```

- sorted() : 반복 가능한 객체에 대한 정렬 수행

```py
result = sorted([9, 1, 3, 5, 2, 7])
reverse_result = sorted([9, 1, 3, 5, 2, 7], reverse=True) # 내림차순
print(result) # [1, 2, 3, 5, 7, 9]
print(reverse_result) # [9, 7, 5, 3, 2, 1]
```