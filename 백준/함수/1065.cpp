/*
	date : 2021.09.03
	problom : 1065
	title : 한수의 개수
    discribe : X가 한수인지 판별하는 함수를 정의해보자
*/
#include <iostream>
using namespace std;

int countH(int n){
    int cnt = 0;
    if (n < 100) return n;
    
    else {
        cnt = 99;
        if (n == 1000) n = 999;
        
        for(int i = 100; i <= n; i++){
            int x = i / 100;
            int y = (i/10)% 10;
            int z = i % 10;
            
            if ((x-y) == (y-z)) cnt++;
        }
    }
    return cnt;
}

int main()
{
   int N;
   cin >> N;
   cout << countH(N);
        
}
