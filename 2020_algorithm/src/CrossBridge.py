# algorithm CrossBridge(T[1..n]){ 
#     // 입력 : n명의 사람이 다리를 건너는데 걸리는 시간 배열 T[1..n] 
#     // 출력(반환값) : 모든 사람이 다리를 건너는데 걸리는 시간 

#     total_time = 0          // 모든 사람이 다리를 건너는데 걸리는 시간. 
#     lowest_time = T[1]    // 다리를 건너는 시간이 가장 짧은 사람을 따로 저장. 
    
#     if ( n == 2 ) {  // 건너려는 사람이 2명인 경우 
#         total_time = MAX( T[1], T[2] ) 
#         return total_time 
#     } 

#     if ( n == 3 ) {  // 건너려는 사람이 3명인 경우 
#     total_time = T[1] + T[2] + T[3] 
#     return total_time 
#     } 

#     for ( i=1 to n-1 ) { // 건너려는 사람이 4명 이상인 경우 
#         if ( i == n-1 ) { // 가장 오래 걸리는 사람인 경우는 그사람만 더함.
#             total_time += T[i+1] 
#             break 
#         } 
#         total_time += T[i+1]  // 시간이 더 오래 걸리는 사람의 값을 더한다. 
#         total_time += lowest_time // 가장 짧은 시간의 사람을 다시 왼편으로 이동. 
#     } 

#     return total_time // n 명의 사람이 다리를 건너는데 걸리는 시간을 반환. 
# } 

def CrossBridge(T, n):
    # 알고리즘에서는 배열의 시작이 1이지만
    # 파이썬 리스트에서는 0번이 시작 인덱스임을 고려.
    total_time = 0
    lowest_time = T[0] # 첫 번째 사람이 다리를 건너는데 걸리는 시간 저장.

    if (n==2):
        total_time = max(T[0], T[1])
        return total_time
    
    if (n==3):
        total_time = T[0] + T[1] + T[2]
        return total_time
    
    for idx_i, val_i in enumerate(T) :
        if ( idx_i + 1 == n-1 ):
            total_time += T[idx_i+1]
            break
        total_time += T[idx_i+1] # 시간이 더 오래 걸리는 사람의 값 더함
        total_time += lowest_time # 가장 짧은 시간의 사람을 다시 왼편으로 이동
    
    return total_time
    

def factorial(n):
    if n == 1:      # n이 1일 때
        return 1    # 1을 반환하고 재귀호출을 끝냄
    return (n * factorial(n - 1))    # n과 factorial 함수에 n - 1을 넣어서 반환된 값을 곱함
 
if __name__ == "__main__":
    
    n = 100

    T = [1,2,4,8]
    # print(factorial(10))

    while n >= 1:
        print(n,'! = ', end='')
        print(factorial(n))
        n=n-1

    # result = CrossBridge(T, n)
    # print("total time is " , result)
    
    