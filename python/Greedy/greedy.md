
# Greedy Algorithm
- 항상 최적의 해가 될 수 없을때가 많음.
- 현 선택지에서 좋은 것만 고르는 방법

## 거스름 돈 문제의 정당성 분석
- 가장 큰 화폐의 단위부터 거슬러 주는 것이 최적의 해를 보장하는 이유?
    - **가지고 있는 동전들 중 큰 단위가 항상 작은 단위의 배수이므로 작은 단위의 동전들을 종합해 다른 해가 나올 수 없기 때문**
    - 만약 800원을 거슬러 주어야 하는 상황에 화폐 단위가 500, 400, 100이라면 ... 500원짜리는 400원짜리의 배수가 아니므로 최적의 해를 보장 못한다.

```py
n = 1260
count = 0

# 화폐 단위에서 큰 단위가 항상 작은 단위의 배수여야 함!
array = [500, 100, 50, 10]

for coin in array:
    count += n // coin
    n %= coin

print(count)
```

## [문제1] 1이 될 때까지
- 입력 : N(1 <= N <= 100000), K(2 <= K <= 100000) 두 자연수
- 출력 : N이 1이 될 때까지 1번 연산 또는 2번 연산 과정 수행해야하는 횟수의 최소값
- 1번 연산 : N - 1
- 2번 연산 : N // K

```py
# 가능한 최대한 N을 K로 나누기
count = 0 # 연산 횟수
N, K = map(int, input().split())

while 1:
    if ( N == 1 ):
        break
    if (N % K == 0):
        N = N // K
    else:
        N -= 1
    print(f"N : {N}")
    count += 1


print(count)
```

### 또 다른 풀이 (log시간 복잡도)
```py
count = 0 # 연산 횟수
n, k = map(int, input().split())

while 1:
    # N이 K로 나누어 떨어지는 수가 될 때까지 빼기
    target = (n // k) * k
    count += (n - target)
    n = target
    # N이 K보다 작을 때 반복문 탈출
    if n < k:
        break
    # K로 나누기
    count += 1
    n //= k

# 마지막으로 남은 수에 대하여 1씩 빼기
count += (n - 1)
print(count)
```

## [문제2] 곱하기 혹은 더하기
```py
# 0과 1인 경우를 제외하고는 모두 곱하면 가장 큰수가 만들어진다.
data = input()

# 첫 번째 문자를 숫자로 변경 후 대입
result = int(data[0])

for i in range(1, len(data)):
    # 두 수 중에서 하나라도 0 또는 1인 경우에는 더하기 연산 수행
    num = int(data[i])
    if (num <= 1 or result <= 1):
        result += num
    else:
        result *= num
print(result)
```

## [문제3] 모험가 길드
- N명의 모험가, 각각 '공포도'가 존재.
- **공포도가 X인 모험가는 반드시 X명 이상으로 길드를 구성**해야 여행을 떠날 수 있음.
- 여행을 떠날 수 있는 그룹의 최댓값?

```py
n = input()
data = list(map(int, input().split()))
data.sort() # 공포도 오름차순 정렬

result = 0 # 총 그룹의 수
count = 0  # 현재 그룹내의 모험가 수

for i in data:
    count += 1 # 현재 그룹에 해당 모험가 포함
    if (count >= i): # 현재 공포도(i)보다 모험가의 수가 더 크면 
        result += 1  # 그룹 결성
        count = 0    # 모험가 초기화

print(result)
```
