
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
