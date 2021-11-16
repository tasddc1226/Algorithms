# 	date : 2021.09.14
# 	problom : 10814
# 	title : 백준_나이순 정렬
#   discribe : 나이가 같으면 먼저 가입한 사람이 앞에 오는 정렬을 해보자

# input
# Line 1 :      온라인 저지 회원의 수 N (1<= N <=100000)
# Line 2 ~ N:   각 회원의 나이와 이름이 공백으로 구분되어 짐. 가입한 순서대로 입력 

# 예시 입력
# 3
# 21 Junkyu
# 21 Dohyun
# 20 Sunyoung

# 예시 출력
# 20 Sunyoung
# 21 Junkyu
# 21 Dohyun

from sys import stdin

N = int(stdin.readline())

data = []
for _ in range(N):
    age, name = map(str, stdin.readline().split())
    age = int(age) # 나이는 int형으로 변환
    data.append((age, name))

# 나이순으로 정렬 > 가입순으로 정렬
data.sort(key= lambda member: (member[0]))

for member in data:
    print(member[0], member[1])
