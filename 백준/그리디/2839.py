
	# date : 2021.10.08
	# problom : 2839
	# title : 설탕 배달
    # description : 최소한의 설탕 봉지로 N kg의 무게의 설탕을 배달하자

import sys
input = sys.stdin.readline

N = int(input())
cnt = 0 # 설탕 봉지 수
while N >= 0:
    if N % 5 == 0:
        cnt += (N // 5)
        print(cnt)
        break
    N -= 3
    cnt += 1
else:
    print(-1)
