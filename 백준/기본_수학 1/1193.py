
# 	date : 2021.09.13
# 	problom : 1193
# 	title : 백준_분수 찾기
#   discribe : 분수의 순서에서 규칙을 찾는 문제

x = int(input()) # x번째 분수를 구하기

line = 0 # 사선 라인
max_num = 0 # x의 라인에서 가장 큰 숫자
while x > max_num:
    line += 1
    max_num += line

# print(line, max_num)

gap = max_num - x
if line % 2 == 0: # 사선 라인이 짝수인 경우
    top = line - gap # 분자 계산
    under = gap + 1  # 분모 계산
else :  # 사선 라인이 홀수인 경우
    top = gap + 1 # 분자 계산
    under = line - gap # 분모 계산
print(f'{top}/{under}')
