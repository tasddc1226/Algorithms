
# 	date : 2021.09.13
# 	problom : 1018
# 	title : 백준_체스판 다시 칠하기
#   discribe : 체스판을 만드는 모든 경우를 시도하여 최적의 방법을 찾아보자

# M*N 크기의 보드에서 8*8 체스판을 만들려고 함.
# 8*8의 맨왼쪽 상단이 흰색 or 검은색이면 됨.
# 하지만, M*N 크기의 보드가 체스판처럼 칠해져있다는 보장이 없음.
# 따라서 잘라낸 후에 체스판에 맞게 다시 칠하려고 함.
# 이 때, 다시 칠해야 하는 정사각형의 최소 개수?
from pprint import pprint

row, col = map(int, input().split())

# board = [0 for _ in range(row)]
board = [input() for _ in range(row)]
cut_board = list()

# pprint(board, indent=4, width=20)

for i in range(row-7):
    for j in range(col-7):
        idx_W = 0;
        idx_B = 0;
        for k in range(i, i+8):
            for l in range(j, j+8):
                if (k+l) % 2 == 0:
                    if board[k][l] != 'W':
                        idx_W = idx_W + 1
                    if board[k][l] != 'B':
                        idx_B = idx_B + 1
                else:
                    if board[k][l] != 'B':
                        idx_W = idx_W + 1
                    if board[k][l] != 'W':
                        idx_B = idx_B + 1
        cut_board.append(idx_W)
        cut_board.append(idx_B)

        # print(str(board[i][j]), end="")
            

print(min(cut_board))

# 예시 입력
# 10 13
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# WWWWWWWWWWBWB
# WWWWWWWWWWBWB

# 예시 출력
# 12
