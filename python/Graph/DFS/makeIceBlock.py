
n, m = map(int, input().split()) # N, M 공백 구분 입력

# 2차원 리스트 입력받기
graph = []
for i in range(n):
    graph.append(list(map(int, input())))


def dfs(x, y):
    # 주어진 2차원 배열의 크기를 벗어나면 종료
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    # 현재 노드를 방문하지 않았다면
    if graph[x][y] == 0:
        graph[x][y] = 1 # 방문 처리
        # 현재 노드에서 상, 하, 좌, 우의 위치들도 모두 확인
        dfs(x - 1, y)
        dfs(x, y - 1)
        dfs(x + 1, y)
        dfs(x, y + 1)
        return True
    return False

# 모든 노드에 대해서 음료수 채우기
result = 0
for i in range(n):
    for j in range(m):
        if dfs(i, j) == True:
            result += 1

print(result)
