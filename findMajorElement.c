/* 과반수 요소 찾기
arr[] = {54, 23, 97, 23, 23, 80, 23, 67, 23}
배열의 크기 : 9
과반수 요소 : 23

크기가 n인 배열 내에 과반수 요소가 있으면 그 요소를 알려주고 없으면 과반수 요소가 없다고 알려주는
알고리즘을 작성. 이 문제를 시간복잡도가 O(nlogn) 인 분할 정복 알고리즘을 작성하고 구현.
(힌트 : 배열 A를 크기가 같은 두 개의 부분 배열 (arr1, arr2)로 분할하라. 
부분 배열 arr1의 과반수 요소와 부분배열 arr2의 과반수 요소를 아는 것이 배열 A의 과반수 요소를 찾는데
도움을 준다.)

초기에 count 값은 0로 가정.

배열의 길이의 반 n/2 보다 count 값이 더 크면 과반수 요소가 있음.
if ( n/2 < count ) {
    return 과반수 요소가 있음.
}

경우 1 : arr1에 과반수 요소가 있고 arr2에 과반수 요소가 있는 경우
(배열의 길이가 1일때) : 
count 값이 0이면 count값은 1


(배열의 길이가 2이상 일 때) :


경우 2 : arr1에 과반수 요소가 없고 arr2에 과반수 요소가 있는 경우
arr2의 과반수 요소가 arr1에 있는지 확인.
있으면 count값 증가.
없으면 count값 유지? 감소?

경우 3 : arr1과 arr2 모두 과반수 요소가 없는 경우.

*/
// int x = 0; // 과반수 요소
// int cnt = 0; // 과반수 요소 개수

// int FindMajor(int A[], int low, int mid, int high){

//     if (cnt == 0 && low <= high){
//         cnt ++;
//         x = A[low];
//         printf("major value is %d count : %d", x, cnt);
//     } else if (cnt == 1 && low <= high) {
//         for (int i = low; low < high; i++){
//             if ( x == A[i] ) cnt++;
//         }
//     }
    
// }

// int FindMost(int A[], int startIdx, int endIdx){
//     // input array A
//     if (startIdx == endIdx) // base case
//         return A[startIdx];
//     int x = FindMost(A, startIdx, (startIdx + endIdx) / 2);
//     int y = FindMost(A, (startIdx + endIdx) / 2 + 1, endIdx);

//     if (x == NULL && y == NULL){
//         return NULL;
//     } else if ( x == NULL && y != NULL ){
//         return y;
//     } else if ( x != NULL && y == NULL ){
//         return x;
//     } else if ( x != y ){
//         return NULL;
//     } else return x;
// }

#include <stdio.h>

int findMajorElement(int A[], int size){
    // 입력 : 부분 배열 A, 부분 배열의 크기
    // 출력 : 배열의 과반수 요소의 개수.
    // 반환값 : 배열의 과반수 요소
    int count = 0;
    int mElement = 0;

    printf("partition array : ");
    for (int i = 0; i < size ; i++){
        printf("%d ", A[i]);
    }

    for (int i = 0; i < size; i++){
        if (count == 0) mElement = A[i];

        if (A[i] == mElement) count++;
        else count--;
    }

    count = 0;
    for (int i = 0; i < size; i++){
        if (A[i] == mElement) count++;
    }

    if (count > size / 2) {
        printf("\ncount : %d\n", count);
        printf("------------------------------------\n");
        return mElement;
        
    } else {
        printf("\nno majority element in array\n");
        printf("------------------------------------\n");
        return -1;
    }
    
}

int partition(int A[], int low, int high){
    // 입력 : 배열 A, 배열 A의 low와 high값.
    // 반환값 : 과반수 요소의 값.
    if ( low < high ){
        int mid = (low + high) / 2;
        partition(A, low, mid);  
        partition(A, mid+1, high);
        return findMajorElement(A, high);   
    }
}

int FindMajorityElement(int A[], int low, int high){
    // int len = sizeof(A) / sizeof(int);
    // printf("len : %d\n", len);

    int element1 = FindMajorityElement(A, low, (low+high)/2 );
    int element2 = FindMajorityElement(A, (low+high)/2+1, high );
    
    if (high == 2){
        if (A[0] == A[1]){
            return A[0];
        } else {
            return -1;
        }
    } else if ( high == 1 ){
        return A[0];
    }

    

    if (element1 == -1 && element2 >= 0){
        return element2;
    } else if (element2 == -1 && element1 >= 0){
        return element1;
    }

    if (element1 == element2){
        return element1;
    } else {
        return -1;
    }
    
}

int main(void){
    int arr[] = {54, 23, 97, 23, 23, 80, 23, 23, 67};
    int size = sizeof(arr) / sizeof(int);
    printf("init array size : %d\n", size);
    printf("init array : ");
    for (int i =0; i < size; i++){ printf("%d ", arr[i]); }
    printf("\n------------------------------------\n");

    // int result = partition(arr, 0, size);
    // if (result != -1) printf("majority element is %d\n", result);
    // else printf("\nno majority element\n");
    
    int result = FindMajorityElement(arr, 0, size-1);
    printf("majority element is %d\n", result);

    return 0;
}