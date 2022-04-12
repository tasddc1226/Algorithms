import sys

# N: 동전 종류, K: 만들 가격
N, K = map(int, input().split())
coins = sorted(list(map(int, sys.stdin.read().split())), reverse=True)

count = 0
for coin in coins:
     count += K // coin
     K %= coin

print(count)

# 10 4200
# 1
# 5
# 10
# 50
# 100
# 500
# 1000
# 5000
# 10000
# 50000