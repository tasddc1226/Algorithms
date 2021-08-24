
w = [[2, 0, 0, 0],
     [5, 4, 0, 0],
     [1, 4, 7, 0],
     [8, 6, 9, 6]]


def N_pyramid_Path(x):

    D = [[0]*4]*4 # 최소 경로를 저장할 배열 D 초기화 및 선언.
    # print('\n'.join([''.join([str(i) for i in row]) for row in D]))
    
    # 도착 정점이 좌측 끝일 경우의 최단 경로
    if x == 1:
        for idx_i, val_i in enumerate(w):
            D[idx_i][1] = D[idx_i-1][1] + w[val_i][1]
            # print(val_i)
        print("shortest path value is : ", D[idx_i][1])
        print('\n'.join([' '.join([str(i) for i in row]) for row in D]))

    # 도착 정점이 우측 끝일 경우의 최단 경로
    elif x == 4:
        for idx_i, val_i in enumerate(w):
            for idx_j, val_j in enumerate(w):
                D[idx_i][idx_j] = D[idx_i-1][idx_j-1] + w[idx_i][idx_j]
        print("shortest path value is : ", D[idx_i][idx_j])
        print('\n'.join([' '.join([str(i) for i in row]) for row in D]))
    # 나머지 경우.
    # else:
    #     for i in range(2,6):
    #         for j in range(1,i):
    #             D[i][j] = min( D[i-1][j-1], D[i-1][j] ) + w[i][j]

if __name__ == "__main__":
     
    x = int(input("4층에 도착하고 싶은 값을 입력하세요(1~4 중 입력) : "))
    N_pyramid_Path(x)
    # print("최단 경로는 : ", result)
