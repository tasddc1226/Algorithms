# date : 2021.09.16
# problom : 1181
# title : 단어 정렬
# [ 성공 ]

from sys import stdin
N = int(stdin.readline())
words = []
for _ in range(N):
    word = stdin.readline().strip()
    if word not in words:
        words.append(word)

words.sort() # 아무것도 없다면 알파벳 정렬
words.sort(key=len) # 길이로 정렬

for word in words:
    print(word)

# strip()
# - 문자열의 처음과 끝의 공백 제거
# - 파이썬에서는 엔터를 '\n'로 인식함.
# - 입력이 여러줄이고 엔터로 입력을 나눠 리스트에 넣고 싶다면 사용.

# split()
# - 어떤 문자를 기반으로 나눌 것인지? 
# - 만약 비어있다면 공백을 기반으로 나눔.
# - 입력이 한줄이고, 공백을 기준으로 나눠 리스트에 넣고싶다면 사용.