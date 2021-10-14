
/*
	date : 2021.09.02
	problom : 8958
	title : OX 퀴즈
	discribe : OX 퀴즈 결과를 일차원 배열로 입력받아 점수를 계산해보자
*/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	char h[80]; 	 // 퀴즈 정답 OX 문자열
	int t, res, acc; // test case, 결과, 정답 수
	cin >> t;
	while (t--) {
	    res = 0; acc = 0;
		cin >> h;
		for (size_t i = 0; i < strlen(h); i++) {
			if ( h[i] == 'O' ) {
				acc++; res += acc;
			} else {
			    acc = 0;
			}
		}
		cout<<res<<"\n";
	}
}