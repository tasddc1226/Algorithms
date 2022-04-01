
from collections import deque

def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True           # 현재 노드 방문 처리
    while queue:                    # 큐가 빌 때까지 반복
        v = queue.popleft()         # 큐에서 하나의 원소 뽑아 출력
        print(v, end=' -> ')
        for i in graph[v]:          # 아직 방문하지 않은 인접 노드를 큐에 append
            if not visited[i]:  
                queue.append(i)
                visited[i] = True

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

bfs(graph, 1, visited)