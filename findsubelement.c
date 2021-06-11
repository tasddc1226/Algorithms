
#include <stdio.h>

int main(){
    int limit = 2;
    int S[] = {20, 50, 60, 70, 90, 100};
    
    // 요소 2개로 160이 되는지?
    for (int i = 0; i < 6; i++){
        for (int j = i+1; j < 6; j++){
            if (S[i] + S[j] == 160)
                printf("%d + %d = 160\n",S[i],S[j]);
        }
    }

    // 요소 3개로 160이 되는지?
    for (int i=0; i<6; i++){
        for (int j=i+1; j<6; j++){
            for (int k=j+1; k<6; k++){
                if (S[i] + S[j] + S[k] == 160)
                    printf("%d + %d + %d = 160\n",S[i],S[j], S[k]);
            }
        }
    }

    for (int i=0; i<6; i++){
        for (int j=i+1; j<6; j++){
            for (int k=j+1; k<6; k++){
                for (int x=k+1; x<6; x++)
                    if (S[i] + S[j] + S[k] + S[x] == 160)
                        printf("%d + %d + %d + %d = 160\n",S[i],S[j], S[k], S[x]);
            }
        }
    }
    
    



    return 0;
}


