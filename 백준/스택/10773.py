
# date : 2021.11.25
# problom : 10773
# title : 제로
# discribe : 스택을 이용해서 최종적으로 스택에 남아있는 합을 구해보자


from sys import stdin

T = int(stdin.readline())

stack = []
sum = 0

for _ in range(T):
    x = int(stdin.readline())
    
    if x == 0:
        popVal = stack.pop()
        sum -= popVal
    else:
        stack.append(x)
        sum += x

print(sum)
