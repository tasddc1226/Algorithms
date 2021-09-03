
/*
	date : 2021.09.03
	problom : 1712 
	title : 손익 분기점
	[ 틀린 풀 이 ]
*/
#include <iostream>
using namespace std;


int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    if (B >= C) {
        cout<< "-1";
    } else {
        // 고정 비용을 차익으로 나눈 후, 거기서 1대를 더팔면 손익분기점을 찾음!
        int res = A / (C - B) + 1;
        cout << res;
    }
    // 시간 초과 부분.
    // for (unsigned long i = 1; 1; i++){
    //     cost  = A + (B * i);
    //     unsigned long total = C * i;
    //     if ( cost < total ) {
    //         cout << i;
    //         return 0;
    //     }
    // }

}
