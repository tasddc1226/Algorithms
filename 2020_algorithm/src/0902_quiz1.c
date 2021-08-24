/* 
1. 강의실에 있는 학생들 중에서 키가 평균 키보다 큰 학생을 찾아내는 알고리즘을
구체적이고 명확하게 적어라. 평균 키는 이 강의실에 있는 모든 학생들의 키의 평균 값이다.
input : array_hight[N] // 학생들의 키가 저장되어있는 배열
output : result[M] // 평균보다 큰 키를 가진 학생들의 배열

sum = 0 // 모든 학생의 키를 합을 계산하기 위한 변수
avg = 0 // 평균 키를 계산하기 위한 변수

for i=0 each element in array_hight[N] 
  sum = sum + arraay_hight[i]    // 모든 학생들의 키의 합 계산
avg = sum / N // 키의 평균값 계산

for i=0 each element in array_hight[N]
  if avg < array_hight[i] // 평균 키 보다 큰 학생이 있으면
    result[i] = array_hight[i] // 결과 배열에 해당 학생의 키를 저장
  else
    continue // 아니면 다음 학생으로 건너뛴다.

2.
S = 0
for (i = 1; i <= n; i++)
    for(j = 1; j <= i; j++)
        S = S + i * j
(a)
입력 크기 : n
기본 연산 : S = S + i * j

(b) Theta 시간복잡도
분석 : 덧셈 횟수(기본연산 횟수) = 1 + 2 + ... + N = n(n+1)/2
시간 복잡도 : Θ(n^2)

*/

#include<stdio.h>

int main(void) {
    int arr_hight[3] = {160, 170, 180};
    int result[3] = {0};
    int sum = 0;
    int avg = 0;

    for (int i=0; i<3; i++) {
        sum = sum + arr_hight[i];
    }
    avg = sum / 3;

    for (int i=0; i<3; i++) {
        if (avg < arr_hight[i]){
            result[i] = arr_hight[i];
        } 
    }

    printf("총 합 : %d\n", sum);
    printf("평균 키 : %d\n", avg);

    printf("평균키보다 큰 학생의 키 : ");
    for(int i=0; i<3; i++) {
        printf("%d\t", result[i]);
    }
    return 0;
}