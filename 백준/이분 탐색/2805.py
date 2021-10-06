# 	date : 2021.09.14
# 	problom : 2805
# 	title : 백준_나무 자르기
#   discribe : 상근이가 M 미터의 나무를 가져갈 수 있도록 해보자.
#   [ 시간 초과 ]

# input
# Line 1 :      나무의 수 N, 집으로 가지고 가려는 나무의 길이 M
# Line 2 :      나무의 수 N개 만큼의 높이 배열

# 예시 입력
# 4 7
# 20 15 10 17

# 예시 출력
# 15

from sys import stdin
# 나무의 수와 가지고가려는 나무의 길이 입력
N, M = map(int, stdin.readline().split())
# 나무들의 높이를 N개 만큼 입력
tree_list = list(map(int, stdin.readline().split()))
# 이분탐색 검색 범위 설정
start, end = 0, max(tree_list)

while(start <= end):
    # 잘린 나무의 총 합
    cut = 0
    mid = (start + end) // 2
    for i in tree_list:
        # 한개의 나무 i가 mid보다 크면 잘림
        if i > mid: 
            cut += i - mid
    
    # 이분 탐색
    if cut >= M:
        start = mid + 1
    else:
        end = mid - 1
print(end)
