/*
합병 정렬의 분할 정복 전략
1. 배열을 반으로 나눔
2. 왼쪽 반과 오른쪽 반을 각각 정렬
3. 정렬된 왼쪽 반과 오른쪽 반을 합병한다.

algorithm MergeSort(A[], low, high){
    // 배열 A[low .. high]를 합병 정렬을 이용하여 정렬한다.
    if (low < high){
        mid = (low + high) / 2
        MergeSort(A, low, mid)
        MergeSort(A, mid+1, high)
        Merge(A, low, mid, high)
    }
}

algorithm Merge(A[], low, mid, high){
    // 크기가 (high + 1)인 배열 B를 만든다.
    h = low;
    i = low;
    j = mid + 1;

    while ( i <= mid && j <= high ){
        if (A[i] <= A[j]){
            B[h] = A[i];
            i++;
        } else {
            B[h] = A[j];
            j++;
        }
        h++;
    }

    if ( i > mid ) {
        for ( k = j; k <= high; k ++ ){
            B[h] = A[k];
            h++;
        }
    } else {
        for ( k = i; k <= mid; k++ ){
            B[h] = A[k];
            h++;
        }
    }
    for ( k = low; k <= high; k++ ){
        A[k] = B[k]
    }
}
*/

# include <stdio.h>
# include <stdbool.h>
# include <time.h>
# include <stdlib.h>

// int MergeCount = 1;

// 세 분할 배열에 숫자들 중 가장 작은수의 인덱스를 반환한다.
int *minThree(int A[], int *i, int *j, int *k){
    if (A[*i] <= A[*j] && A[*i] <= A[*k]){
        return i;
    }
    if (A[*j] <= A[*i] && A[*j] <= A[*k]){
        return j;
    }
    if (A[*k] <= A[*i] && A[*k] <= A[*j]){
        return k;
    }
}

int *minTwo(int A[], int *i, int *j){
    if (A[*i] <= A[*j]) return i;
    else return j;
}

int Merge3(int A[], int low, int mid1, int mid2, int high){
    
    // printf("\n%d th Merge \n", MergeCount);
    int B[high-low+1]; // 새 배열 B를 만들어 준다.
    bool pass = false; // 조건을 만족할 경우 나머지 if문을 통과하기 위한 변수
    
    int i = 0;
    int h = low;
    int j = mid1 + 1;
    int m = mid2 + 1;

    // 세분할 배열 중 하나를 다 복사할때까지 루프를 돈다.
    for (; h <= mid1 && j <= mid2 && m <= high; i++) {
        int *p = minThree(A, &h, &j, &m);
        B[i] = A[*p];
        *p = *p + 1;
    }


    if ( h > mid1 ){
        pass = true;
        // 나머지 두 분할 배열중 하나를 다 복사할때까지 루프를 돈다.

        for ( ; j <= mid2 && m <= high ; i++ ){
            int *p = minTwo(A, &j, &m);
            B[i] = A[*p];
            *p = *p + 1;
        }
        // 나머지 하나의 분할 배열을 복사한다.
        if (j > mid2){
            for (; m<= high; i++, m++){
                B[i] = A[m];
            }
        } else {
            for (; j <= mid2; i++, j++){
                B[i] = A[j];
            }
        }
    }

    if (j > mid2 && !pass){
        pass = true;
        for (; h<= mid1 && m <= high; i++){
            int *p = minTwo(A, &h, &m);
            B[i] = A[*p];
            *p = *p + 1;
        }
        if (h > mid1){
            for (; m <= high; i++, m++){
                B[i] = A[m];
            }
        } else {
            for (; h <= mid1; i++, h++){
                B[i] = A[h];
            }
        }
    }

    if ( m > high && !pass){
        for (; h <= mid1 && j <= mid2; i++){
            int *p = minTwo(A, &h, &j);
            B[i] = A[*p];
            *p = *p + 1;
        }

        if ( j > mid2 ){
            for (; h <= mid1; i++, h++){
                B[i] = A[h];
            }
        } else {
            for (; j <= mid2; i++, j++ ){
                B[i] = A[j];
            }
        }
    }
    
    // 정렬된 임시 배열을 원본에 저장.
    for (int k = low; k <= high; k++ ){
        A[k] = B[k-low];
    }

    // for (int k = low; k <= high; k++ ){
    //     printf("%d ", A[k]);
    // }
    // printf("\n---------------------\n");
    // MergeCount ++;
}

int MergeSort3(int A[], int low, int high){
    int mid1, mid2;
    // 부분 문제로 쪼갠 배열의 size가 2 이상일 때.
    if ( (high - low) >= 2 ) {
        
        mid1 =  (high-low)/3 + low;
        mid2 = ((high-low)*2)/3 + low;

        // printf("\nmid1 = %d ", mid1);
        // printf("\nmid2 = %d ", mid2);

        MergeSort3(A, low, mid1); // 0 ~ 5
        MergeSort3(A, mid1+1, mid2); // 6 ~ 11
        MergeSort3(A, mid2+1, high);  // 12 ~ 17
        Merge3(A, low, mid1, mid2, high);

    } else {
        // 부분 문제로 쪼갠 배열의 size가 2일때.
        // 배열 앞에있는 요소가 뒤에있는 요소보다 클 때 위치 변경.
        if ( (high-low) == 1 && A[low] > A[high]){
            int tmp = A[low];
            A[low] = A[high];
            A[high] = tmp;
        }
    }       
}

int Merge2(int A[], int low, int mid, int high){
    int h = low;
    int i = low;
    int j = mid + 1;
    int B[high+1];

    while ( i <= mid && j <= high ){
        if (A[i] <= A[j]){
            B[h] = A[i];
            i++;
        } else {
            B[h] = A[j];
            j++;
        }
        h++;
    }

    if ( i > mid ){
        for ( int k = j; k <= high; k++ ){
            B[h] = A[k];
            h++;
        }
    } else {
        for ( int k = i; k <= mid; k++ ){
            B[h] = A[k];
            h++;
        }
    }

    for (int k = low; k <= high; k++ ){
        A[k] = B[k];
    }
}

int MergeSort2(int A[], int low, int high){
    if (low < high) {
        int mid = (low + high) / 2;
        MergeSort2(A, low, mid);
        MergeSort2(A, mid+1, high);
        Merge2(A, low, mid, high);
    }
}

// 정렬된 배열 출력하는 함수
int print(int A[], int size){

    for ( int i = 0; i < size; i ++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(void){

    srand(time(NULL));
    int S[100000] = {0};
    clock_t start1, start2, end1, end2;
    float res1, res2;
    // int S[] = {78, 33, 95, 18, 45, 91, 58, 23, 75, 69, 78, 52, 38, 98, 68, 90, 36, 19};
    //int S[] = {91, 82, 13, 85, 68, 70, 98, 24};
    int len = sizeof(S) / sizeof(int);
    for (int i = 0 ; i < len; i++ ){
        S[i] = rand() % 1000000 + 1;
    }

    // printf("Before Sorting ... \n");
    // print(S, len);

    start1 = clock();

    MergeSort3(S, 0, len-1);
    end1 = clock();
    res1 = (float)(end1- start1)/CLOCKS_PER_SEC;
    printf("\n 3 Merge Sort time : %.3f \n", res1);

    start2 = clock();
    MergeSort2(S, 0, len-1);
    end2 = clock();
    res2 = (float)(end2 - start2)/CLOCKS_PER_SEC;
    printf("\n 2 Merge Sort time : %.3f \n", res2);

    // printf("\nAfter Sorting ...\n");
    // print(S, len);
    
    
    
    return 0;

}