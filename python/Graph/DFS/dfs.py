
def dfs(graph, v, visited):
    # 현재 노드를 방문처리
    visited[v] = True
    print(v, end=' -> ')
    # 현재 노드와 연결된 방문하지 않은 노드를 재귀적으로 방문
    for i in graph[v]:
        if not visited[i]:
            dfs(graph, i, visited)

graph = [
    [], # 노드의 번호가 1번부터 시작하므로 0번째 요소는 비워둠
    [2, 3, 8], # 1번 노드는 2, 3, 8과 연결되어 있음을 의미
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * 9

dfs(graph, 1, visited)