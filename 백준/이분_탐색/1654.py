
# date : 2021.09.29
# problom : 1654
# title : 랜선 자르기
# [ 성공 ]

from sys import stdin
k, n = map(int, stdin.readline().split())

L = [int(stdin.readline()) for _ in range(k)]

min_l, max_l = 1, max(L)

while(min_l <= max_l):
    mid = (max_l + min_l) // 2
    cnt = 0
    for l in L:
        cnt += l // mid

    if cnt >= n:
        min_l = mid + 1
    else:
        max_l = mid - 1
print(max_l)

# 4 11 -> 예시 입력
# 802
# 743
# 457
# 539

# 200 -> 예시 출력

