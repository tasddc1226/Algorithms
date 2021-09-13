
# 	date : 2021.09.13
# 	problom : 7568
# 	title : 백준_덩치


n = int(input())

data = [] # 키와 몸무게를 저장할 리스트
answer = [] # 등수를 저장할 리스트
for i in range(n): # 인원수 만큼 반복
    a, b = map(int, input().split()) 
    data.append((a, b)) # 몸무게와 키를 묶어서 data에 추가

for i in range(n):
    count = 0
    for j in range(n):
        if data[i][0] < data[j][0] and data[i][1] < data[j][1]:
            count += 1
    answer.append(count+1)

for d in answer:
    print(d, end=" ")