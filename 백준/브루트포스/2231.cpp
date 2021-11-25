
/*
 	date : 2021.11.25
 	problom : 2231
 	title : 분해합
    discribe : 입력한 수의 가장 작은 분해합을 브루프포스 알고리즘을 이용해 찾아보자
*/

#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

int main(){
    int N, sum = 0;
    int min = INT_MAX;
    bool flag = false;
    cin >> N;
    
    for (int i=N-1; i > 0; i--){
        int diff = N - i;
        int temp = i;
        for (int j=temp; j > 0; j=j/10){
            sum += j % 10;
        }
        if (sum == diff && min > i){
            min = i;
            flag = true;
        }
        sum = 0;
    }
    
    if (flag){
        cout << min;
    } else cout << 0;
  
}
