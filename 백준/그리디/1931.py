from sys import stdin
N = int(stdin.readline())
count = 1
# 입력한 개수만큼 2차원 배열의 row 생성
meets = [[0] * 2 for _ in range(N)]
for i in range(N):
    start, end = map(int, stdin.readline().split())
    meets[i][0] = start
    meets[i][1] = end

# idea. 회의가 빨리 끝나는 시간을 기준으로 오름차순 정렬
meets.sort(key=lambda x: (x[1], x[0]))

end_time = meets[0][1]
for i in range(1, N):
    if meets[i][0] >= end_time:
        count += 1
        end_time = meets[i][1]
print(count)

# array = [('홍길동', 50), ('김영희', 87), ('이철수', 90)]

# # 정렬 기준을 lambda 함수로..
# print(sorted(array, key=lambda x : x[0])) # 이름순 정렬

# print(sorted(array, key=lambda x : x[1])) # 점수순 정렬

# # [('김영희', 87), ('이철수', 90), ('홍길동', 50)]
# # [('홍길동', 50), ('김영희', 87), ('이철수', 90)]

# # 여러 리스트에서 lambda 표현식
# list1 = [1, 2, 3, 4, 5]
# list2 = [6, 7, 8, 9, 10]

# result = map(lambda a, b: a + b, list1, list2)
# print(list(result)) # [7, 9, 11, 13, 15]
