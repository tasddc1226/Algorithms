/*
quiz 3 
N은 양의 정수이고 i와 j는 1 <= i <= j <= N 을 만족하는 정수들이다.
배열 A[i..j]에서 분할 정복 기법을 이용하여 최댓값을 찾는 재귀 알고리즘을 작성하라.

algorithm findMax(A[], int i, int j){ // 배열 A[i..j]에서 최댓값을 찾는다.
  int mid, max1, max2;
  if (i = j) return A[i] // 배열의 요소가 1개이면 해당 값이 최대값이다.
  else {
    mid = (i+j) / 2; // 배열의 중간 요소의 index를 구한다.
    max1 = findMax(i, mid); // 왼쪽 반의 최대값을 찾는다.
    max2 = findMax(mid+1, j) // 오른쪽 반의 최대값을 찾는다.
    if (max1 >= max2) return max1
    else return max2
  }
}
최초 호출 : findMax(A, 0, N-1)

*/

#include <stdio.h>

int findMax(int A[], int i, int j){
    int mid, max1, max2;

    if (i == j) { 
        return A[i];
    } else {
        mid = (i+j) / 2;
        max1 = findMax(A, i, mid);
        max2 = findMax(A, mid+1, j);
        if (max1 >= max2){
            return max1;
        } else {
            return max2;
        }
    }
}

int main(void) {

    int arr[] = {54, 65, 23, 103, 75, 67, 91, 61, 98, 10};
    int len = sizeof(arr)/ sizeof(int);

    for (int i = 0; i < len ; i++ ){
        printf("%d ", arr[i]);
    }

    int max = findMax(arr, 0, len-1);
    printf("\nmax value is %d ", max);

    return 0;

}