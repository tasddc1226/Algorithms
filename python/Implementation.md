
# Implementation
- 구현 유형의 예시
    1. 코드가 길어지는 문제
    2. 실수 연산 및 특정 소수점 자리까지 출력
    3. 문자열을 특정 기준에 맞게 끊어 처리
    4. 적절한 라이브러리 사용

- 2차원 공간에서의 **방향 벡터** 사용법
```Py
    # 동 북 서 남
dx = [0, -1, 0, 1]
dy = [1, 0, -1, 0]

x, y = 2, 2 # current position

for i in range(4):
    nx = x + dx[i]
    ny = y + dy[i]
    print(nx, ny) # 현재 위치에서 동, 북, 서, 남 순서로 탐색
```

## [문제1] 상하좌우
- N x N의 정사각형 공간 위에서 가장 왼쪽 위 좌표는 (1, 1) 가장 오른쪽 아래 좌표 (N, N)에 해당.
- 상, 하, 좌, 우 방향으로 이동 가능하며 시작 좌표는 (1, 1)로 고정
- 입력으로 이동할 계획서가 주어짐 (R R R U D D)
- 만약 N x N의 범위를 벗어나는 명령이면 무시

```py
n = int(input())
plan = list(map(str, input().split()))

# R, U, L, D
dx = [0, -1, 0, 1]
dy = [1, 0, -1, 0]
move_types = ['R', 'U', 'L', 'D']

x, y = 1, 1

for direction in plan:
    for i in range(len(move_types)):
        if direction == move_types[i]:
            nx = x + dx[i]
            ny = y + dy[i]
        if nx < 1 or ny < 1 or nx > n or ny > n:
            continue
        x, y = nx, ny
            
print(x, y)
```

## [문제2] 왕실의 나이트
- 8 * 8 좌표에서 나이트의 위치가 주어졌을 때 나이트가 이동할 수 있는 경우의 수 출력
- 나이트는 아래의 두 가지 경우만 움직일 수 있음
    1. 수평으로 두칸 이동 후 수직으로 한 칸 이동
    2. 수직으로 두칸 이동 후 수평으로 한 칸 이동
- 단, 행은 a ~ h로 입력하고 열은 1 ~ 8로 입력함.

```py
input_data = input()
row = int(input_data[1])
col = int(ord(input_data[0])) - int(ord('a')) + 1

# 총 8가지 방향 정의
steps = [(-2, 1), (-2, -1), (2, 1), (2, -1), (1, 2), (-1, 2), (1, -2), (-1, -2)]

result = 0
for step in steps:
    nr = row + step[0]
    nc = col + step[1]
    if (nr >= 1 and nc >= 1 and nr <= 8 and nc <= 8):
        result += 1
print(result)
```
