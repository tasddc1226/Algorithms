
# 	date : 2021.10.07
# 	problom : 11650
# 	title : 백준_좌표 정렬하기
#   discribe : x, y 좌표쌍들을 정렬해보자, 만약 x좌표가 같다면 y좌표가 증가하는 순으로 정렬

import sys
n = int(sys.stdin.readline())
x = []
for i in range(n):
    x.append(list(map(int, sys.stdin.readline().split())))
x.sort(key=lambda x: (x[0], x[1]))
for i in x:
    print(i[0], i[1])