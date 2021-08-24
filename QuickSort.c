#include <stdio.h>

int partition(int S[], int low, int high){
    int i = low + 1;
    int j = high;
    while ( i <= j ){
        if (S[i] <= S[low]) i++;
        else if (S[j] > S[low]) j--;
        else {
            int tmp = S[i];
            S[i] = S[j];
            S[j] = tmp;
        }
    }
    int tmp = S[low];
    S[low] = S[j];
    S[j] = tmp;
    return j;
}

void quickSort(int S[], int low, int high){
    if ( low < high ){
        int s = partition(S, low, high);
        quickSort(S, low, s-1);
        quickSort(S, s+1, high);
    }
}

int main(void){
    
    int A[] = {68, 25, 74, 61, 13, 80};
    int len = sizeof(A)/sizeof(int);

    printf("len : %d\n", len);
    printf("-----Before Sorting-----\n");
    for (int i = 0; i < len; i++){
        printf("%d ", A[i]);
    }
    quickSort(A, 0, len-1);

    printf("\n-----After Sorting-----\n");
    for (int i = 0; i < len; i++){
        printf("%d ", A[i]);
    }

    return 0;
}