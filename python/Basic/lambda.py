array = [('홍길동', 50), ('김영희', 87), ('이철수', 90)]

# 정렬 기준을 lambda 함수로..
print(sorted(array, key=lambda x : x[0])) # 이름순 정렬

print(sorted(array, key=lambda x : x[1])) # 점수순 정렬

# [('김영희', 87), ('이철수', 90), ('홍길동', 50)]
# [('홍길동', 50), ('김영희', 87), ('이철수', 90)]

# 여러 리스트에서 lambda 표현식
list1 = [1, 2, 3, 4, 5]
list2 = [6, 7, 8, 9, 10]

result = map(lambda a, b: a + b, list1, list2)
print(list(result)) # [7, 9, 11, 13, 15]
