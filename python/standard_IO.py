
# input() : 한 줄의 문자열을 input
# map() : list의 모든 원소에 각각 특정 func apply

# 예시) 학생들의 점수가 공백을 기준으로 한 줄로 입력이 들어온다.
list(map(int, input().split()))

# 예시-1) 마찬가지로 공백을 기준으로 한 줄로 입력되어지는데 개수가 적을 때
# unpacking <- packing
a, b, c = map(int, input().split())

# map(int, ... ) 를 하는 이유 ?
# => 입력을 문자열로 받기 때문에

# more faster
import sys

# 한줄 입력 빠르게
data = sys.stdin.readline().rstrip()
print(data)

# f-string sample
answer = 7
# print("The answer is .. " + str(answer))
print(f"The answer is .. {answer}")
