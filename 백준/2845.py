
# 	date : 2021.09.14
# 	problom : 2845
# 	title : 백준_파티가 끝나고 난뒤
#   discribe : 각 신문 기사에 실려있는 참가자의 수가 몇 명 만큼 잘못되었는지 구해보자

# input
# Line 1. 1m^2 당 사람의 수 (1<= L <=10), 파티가 열렸던 곳의 넓이 P (1<= P <= 1000)
# Line 2. 각 기사에 실려있는 참가자의 수 ( < 10^6 인 양의 정수 5개 ) 

L, P = map(int, input().split())
people = [int(x) for x in input().split()]

total = L * P
for i in people:
    print(i-total, end=" ")