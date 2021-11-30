
# date : 2021.11.29
# problom : 1946
# title : 신입사원
# discribe : 조건을 만족하면서 신입사원을 채용하는 최대 인원수를 구해보자
# [ 시간 초과 ]

from sys import stdin

T = int(stdin.readline())
for _ in range(T):
    newEmps = []
    N = int(stdin.readline())
    for _ in range(N):
        newEmps.append(tuple(map(int, input().split())))
    
    newEmps.sort()
    print(newEmps)
    
    a = newEmps[0][1]
    print("a: ", a)
    cnt = 0
    for i in newEmps:
        if i == newEmps[0]:
            cnt += 1
        elif i[1] < a:
            cnt += 1
            a = i[1]
    print(cnt)
    
    