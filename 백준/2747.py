# 	date : 2021.09.15
# 	problom : 2747
# 	title : 백준_피보나치 수

n=int(input())
a,b=0,1
for i in range(n):
    a,b=b,a+b
print(a)