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

def cutTree(low, high, trees, m):
    cut = 0
    mid = (low + high) // 2
    
    for tree in trees:
        # 나무 높이 i가 mid 값 보다 크다면
        if (tree > mid):
            # 나무를 자르고 자른 나무를 더해줌
            cut = cut + (tree - mid)
    # 자른 나무의 값이 M과 같다면
    if (cut == m):
        print(mid) # 자른 나무의 높이값 출력
        return 0
    elif (cut < m) :
        # range : 0, mid-1
        cutTree(low, mid-1, trees, m)
    elif (cut > m):
        # range : mid+1, r
        cutTree(mid+1, high, trees, m)


from sys import stdin
# 나무의 수와 가지고가려는 나무의 길이 입력
N, M = map(int, stdin.readline().split())
# 나무들의 높이를 N개 만큼 입력
tree_list = list(map(int, stdin.readline().split()))
# 입력된 나무들의 높이의 최대값, 최소값 추출
max_hight = max(tree_list)
min_hight = min(tree_list)

cutTree(min_hight, max_hight, tree_list, M)