
/*
	date : 2021.09.03
	problom : 4673
	title : 셀프 넘버
    discribe : 함수 d를 정의하여 문제를 해결해보자
*/
#include <iostream>
using namespace std;
bool chk[10001];

int d(int n){
    int sum = n;
    while(1){
        if (n==0) break;
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int idx;
    int N = 10000;
    for(int i=1; i<N; i++){
        idx = d(i);
        if (idx <= N) chk[idx] = true;
    }
    
    for (int i=1; i<N; i++)
        if(!chk[i]) cout << i << "\n";
        
}
