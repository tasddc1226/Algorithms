

# # 5자리 2진수 0~31까지 모두 출력하기

# for n in range(0,32):
    
#     mask = 0b10000  # 8비트 중 상위 1비트만 1인 수 
#     print('{}을 2진수로 출력하면 '.format(n), end='')
    
#     for i in range(0,5):
#         print('1' if (mask & n) == mask else '0', end='')
#         mask = mask >> 1
#     print()
    
#     # print('파이썬 : {0}을 2진수로 출력하면 {1}'.format(n, bin(n)))


# 피보나치 수열
# 2, 3, 5, 8, 13 

def CountRec(n):
    if (n==1): return 2
    elif (n==2): return 3
    else: return (CountRec(n-1) + CountRec(n-2))

def CountFor(n):
    list = []
    for a in range(n): list.append(0)
    print("빈 리스트 : ", end = '')
    print(list)
    list = [2,3]
    print("초기 리스트 : ", end = '')
    print(list)

    for i in range(2, n):
        list[i] = list[i-1] + list[i-2]
    return list[n]

if __name__ == "__main__":
    print('input length : ', end="")
    len = input()
    
    Recresult = CountRec(int(len))
    Forresult = CountFor(int(len))

    print('Recursive result is.. ', Recresult)
    print('Forloop result is.. ', Forresult)
    