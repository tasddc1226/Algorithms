# 그래프 탐색 알고리즘
- 원하는 데이터를 그래프에서 탐색하는 과정
- DFS, BFS가 대표적

## 파이썬에서의 스택과 큐 자료구조
### Stack
- 선입 후출 자료구조
- 입구 == 출구의 형태
- python의 List는 stack 형태이다

```Py
stack = []

stack.append(5)
stack.append(4)
stack.append(1)
stack.pop()
stack.append(2)
stack.pop()

print(stack[::-1]) # 최 상단 원소부터 출력
print(stack) # 최 하단 원소부터 출력
```

### Queue
- 선입 선출 자료구조
- 터널과 같은 형태
- python에서 list로 Queue를 구현할 수도 있지만 시간복잡도면에서 비효율적임

```Py
from collections import deque

queue = deque()

# 삽입, 삭제 모두 O(1) 즉, 상수 시간
# 오른쪽에서 들어와서
queue.append(5) # [5]
queue.append(2) # [5, 2]
queue.append(3) # [5, 2, 3]
# 왼쪽으로 나감
queue.popleft() # [2, 3]
queue.append(1) # [2, 3, 1]
queue.popleft() # [3, 1]

print(queue) # 먼저 들어온 순으로..
queue.reverse() # 역순으로 바꾸기
print(queue)
```

## 재귀 함수
- 함수는 함수인데 자기 자신을 호출하는 함수
- ```DFS```를 구현하는데 있어서 사용됨
    - 최대 깊이까지 메시지 출력하는 예시
    ```py
    def recursive_fun():
        print('call me!')
        recursive_fun()
        
    recursive_fun()
    ```
- python에서 재귀함수에 대한 최대 깊이 제한이 존재한다. 왜냐하면 리소스는 한정되어있기 때문.

### 재귀 함수의 종료조건
- 반드시 종료 조건을 명시
- 무한 호출은 피하자
    - 종료 조건을 포함한 재귀 함수 예시
    ```Py
    def recursive_fun(i):
        if i == 100:
            return
        print(i, 'th, call me!', i + 1, 'th, is next call!')
        recursive_fun(i+1)
        print(i, 'th, recursive_fun exit!')
        
    recursive_fun(1)
    ```

### Factorial 구현
```py
# iterative
def fact_iter(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result

# recursive
def fact_recur(n):
    if n <= 1:
        return 1
    return n * fact_recur(n - 1)
```

# DFS(Depth-First Search)
- 깊이 우선 탐색 알고리즘
- Stack 또는 재귀 함수 사용
    - 동작 과정
        1. 탐색 시작 노드를 Stack에 push후 방문 처리
        2. Stack의 최상단 노드에서 방문하지 않은 노드가 하나라도 있으면 해당 노드를 Stack에 push후 방문 처리. 방문하지 않은 인접 노드가 없다면 Stack에서 pop
        3. 더 이상 2번 과정을 수행할 수 없을 때까지 반복

# BFS(Breadth-First- Search)
- 너비 우선 탐색 알고리즘
- 가까운 노드부터 우선적으로 탐색
- Queue 자료구조 사용
    - 동작 과정
        1. 탐색 시작 노드를 큐에 append후 방문 처리
        2. 큐에서 노드를 꺼낸 뒤, 해당 노드의 인접 노드 중 방문하지 않은 노드를 모두 큐에 append후 방문 처리
        3. 더 이상 2번 과정을 수행할 수 없을 때까지 반복



