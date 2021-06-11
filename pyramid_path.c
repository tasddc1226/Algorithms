#include <stdio.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))

void pyramid_path(int w[5][5]){
    // 최단 경로를 저장하는 배열 D 선언 및 초기화
    int D[5][5] = {0,};
    
    // 맨 끝지점의 최단 경로를 계산한다.
    for (int i=1; i<=4; i++){
        for (int j=1; j<=i; j++){
            if (i==1 && j==1) D[i][j] = w[i][j]; // 출발 지점 setting
            else if (j==1) D[i][j] = D[i-1][j] + w[i][j]; // 1) 도착 지점이 좌측 끝인 경우 계산
            else if (i==j) D[i][j] = D[i-1][j-1] + w[i][j]; // 2) 도착 지점이 우측 끝인 경우 계산
            else D[i][j] = MIN( D[i-1][j-1], D[i-1][j] ) + w[i][j]; // 3) 나머지 경우 계산
        }
    }
    // 각 도착 지점에 대한 최단 경로를 계산한 행렬 D 출력.
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++) {
            printf(" %d ", D[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    
    // 가중치 행렬 선언.
    int w[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 2, 0, 0, 0},
        {0, 5, 4, 0, 0},
        {0, 1, 4, 7, 0},
        {0, 8, 6, 9, 6}
    };
    
    pyramid_path(w); // 함수 호출
    

}




// // 가중치 행렬 출력.
    // printf("----- weight array W ------\n");
    // for( int i=1; i<=4; i++ ){
    //     for( int j=1; j<=4; j++ ) {
    //         if (w[i][j] != 0) printf("%d  ", w[i][j]);
    //     }
    //     printf("\n");
    // }
    // 출발 지점 setting
    // D[1][1] = w[1][1];
//  // 1) 도착 지점이 좌측 끝인 경우 계산
    // for (int i=2; i<=5; i++){
    //     D[i][1] = D[i-1][1] + w[i][1];
    // }
    // 2) 도착 지점이 우측 끝인 경우 계산
    // for (int i=2; i<=5; i++){
    //     for(int j=2; j<=5; j++){
    //         if (i==j) D[i][j] = D[i-1][j-1] + w[i][j];
    //     }
    // }