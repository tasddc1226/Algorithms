
# 	date : 2021.10.05
# 	problom : 10870
# 	title : 백준_피보나치 2
#   discribe : 점화식을 이용한 N번째 피보나치 수를 구해보자

def CountRec(n):
    if (n==0): return 0
    elif (n==1): return 1
    else: return (CountRec(n-1) + CountRec(n-2))

N = int(input())
print(CountRec(N))