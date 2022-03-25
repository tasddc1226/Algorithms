import time
start_time = time.time()

# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [i for i in range(10)]

# [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]
arr = [i for i in range(20) if i % 2 == 0]

# [1, 4, 9, 16, 25, 36, 49, 64, 81]
arr = [i * i for i in range(1, 10)]

# N x M size array
n = 3
m = 4
arr = [[0] * m for _ in range(n)]
print(arr)

# for i in arr:
#     print(i * i)

a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3, 5}

# remove_set에 포함되지 않은 값만 저장
result = [i for i in a if i not in remove_set]
print(result) # [1, 2, 4]

end_time = time.time()
print("time: ", end_time - start_time)