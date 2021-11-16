
# 	date : 2021.10.05
# 	problom : 2178
# 	title : 백준_미로 탐색
#   discribe : 그래프 이론 BFS를 적용해서 미로를 해결하자

n, m = map(int, input().split())
s = []
queue = []
dx = [1, -1, 0, 0]
dy = [0, 0, -1, 1]
for i in range(n):
    s.append(list(input()))

queue = [[0, 0]]
s[0][0] = 1

while queue:
    a, b = queue[0][0], queue[0][1]
    del queue[0]
    for i in range(4):
        x = a + dx[i]
        y = b + dy[i]
        if 0 <= x < n and 0 <= y < m and s[x][y] == "1":
            queue.append([x, y])
            s[x][y] = s[a][b] + 1
print(s[n-1][m-1])
