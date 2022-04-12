
 	# date : 2021.09.09
    # problom : 1920
	# title : 수 찾기
    # discribe : 배열을 정렬하고 이분 탐색을 적용해보자

from sys import stdin, stdout

N = stdin.readline()
listN = sorted(map(int, stdin.readline().split()))
M = stdin.readline()
listM = map(int, stdin.readline().split())

def binary(target, N, start, end):
    if start > end:
        return 0
    m = (start+end) // 2
    if target == N[m]:
        return 1
    elif target < N[m]:
        return binary(target, N, start, m-1)
    else:
        return binary(target, N, m+1, end)

for i in listM:
    start = 0
    end = len(listN) - 1
    print(binary(i, listN, start, end))

# # 한줄 입력 빠르게
# data = sys.stdin.readline().rstrip()
# print(data)
