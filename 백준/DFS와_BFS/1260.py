
# BOJ_1260 문제를
# Python으로 BFS와 DFS를 구현해보자.
# 양방향 그래프

from collections import deque

def DFS(graph, root):
    visited = []
    stack = [root]
    while stack:
        n = stack.pop()
        if n not in visited:
            visited.append(n)
            if n in graph:
                temp = list(set(graph[n]) - set(visited))
                temp.sort(reverse=True)
                print(temp)
                stack += temp
    
    return " ".join(str(i) for i in visited)

def BFS(graph, root):
    visited = []
    queue = deque([root])

    while queue:
        n = queue.popleft()
        if n not in visited:
            visited.append(n)
            if n in graph:
                temp = list(set(graph[n]) - set(visited))
                temp.sort()
                queue += temp
    
    return " ".join(str(i) for i in visited)

graph = {}
n = input().split(' ')
# 정점 개수, 간선 개수, start 정점
node, edge, start = [int(i) for i in n]
# edge의 개수만큼 반복하면서 edge_info를 띄어쓰기를 구분하여 입력받음.
for i in range(edge):
    edge_info = input().split(' ')
    n1, n2 = [int(j) for j in edge_info]
    # 양방향 그래프이므로 입력받은 edge_info를 서로 연결
    if n1 not in graph:
        graph[n1] = [n2]
    elif n2 not in graph[n1]:
        graph[n1].append(n2)
    
    if n2 not in graph:
        graph[n2] = [n1]
    elif n1 not in graph[n2]:
        graph[n2].append(n1)
    # print(i, graph)

print(DFS(graph, start))

# print(BFS(graph, start))