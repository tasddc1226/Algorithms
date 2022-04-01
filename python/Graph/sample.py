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