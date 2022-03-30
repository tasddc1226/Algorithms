
n = int(input())

result = 0
for i in range(n + 1): # hour
    for j in range(60): # min
        for k in range(60): # sec
            if '3' in str(i) + str(j) + str(k):
                result += 1
print(result)