
# 	date : 2021.09.14
# 	problom : 1032
# 	title : 백준_명령 프롬프트
#   discribe : 파일 이름을 입력으로 하여 패턴을 찾아보자

# input
# Line 1 :      파일 이름의 개수 N <= 50
# Line 2 ~ N :  파일 이름

# 예시 입력
# 3
# config.sys
# config.inf
# configures

# 예시 출력
# config????

from sys import stdin
N = int(stdin.readline())
filenames = []
for i in range(N):
    filenames.append(input())


pattern = list(filenames[0])

for i in range(1,N):
    for a in range(len(pattern)):
        if pattern[a] == filenames[i][a]:
            pass
        else:
            pattern[a] = '?'

print(''.join(pattern))
