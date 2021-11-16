
# 	date : 2021.10.06
# 	problom : 1103
# 	title : 백준_게임
#   discribe : 2차원 격자모양의 판에서 게임을 해보자

# 재귀를 사용해서 풀어야하는 문제라면 이 코드는 선택이 아닌 필수
# 파이썬의 기본 재귀 깊이 제한은 1000으로 매우 얕은 편이다.
# 따라서 재귀로 문제를 풀 경우 흔하게 제한에 걸려 런타임에러가 뜨게되는데
# 코딩테스트 환경에서는 에러 메시지를 볼 수 없음!

import sys
from collections import deque
sys.setrecursionlimit(10 ** 6) 
input = sys.stdin.readline
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

N, M = map(int, input().split())
arr = []
for _ in range(N):
    arr.append(list(input().rstrip()))

# 방문 여부를 확인하는 배열 visited 선언
visited = [[False] * M for _ in range(N)]
# 움직인 횟수 count를 저장하는 dp 배열 선언
dp = [[0] * M for _ in range(N)]

result = 0
def DFS(x, y, cnt):
    global result
    result = max(result, cnt)
    for i in range(4):
        nx = x + int(arr[x][y]) * dx[i]
        ny = y + int(arr[x][y]) * dy[i]
        # 시작점에서 상하좌우로 움직이는데 밖으로 나가지 않고, H가 아니고, 이전보다 움직인 횟수가 작으면 진행
        if 0 <= nx < N and 0 <= ny < M and arr[nx][ny] != "H" and dp[nx][ny] < cnt+1:
            # 만약 방문을 했던 곳이라면 무한루프에 빠질 수 있으므로 -1 출력 후 종료
            if visited[nx][ny]:
                print(-1)
                exit()
            # 방문을 하지 않았던 곳이라면 진행
            else:
                # dp와 visited를 update 한 후, 재귀를 통해 진행
                dp[nx][ny] = cnt + 1
                visited[nx][ny] = True
                DFS(nx, ny, cnt+1)
                visited[nx][ny] = False

DFS(0, 0, 0)
# 마지막 좌표에서 밖으로 나가거나 H에 빠져도 되므로 마지막 결과에 +1 한 값을 출력한다.
print(result+1)

