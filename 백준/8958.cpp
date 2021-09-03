
/*
	date : 2021.09.02
	problom : 8958
	title : OX 퀴즈
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#define all(v) v.begin(), v.end()
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char h[80]; // 퀴즈 정답 OX 문자열
	int res = 0; // 결과
	int acc = 0; // 정답 수
    int loop = 0; // loop count
	int n; // test case
	cin >> n;
	while (n > loop) {
		cin >> h;
		for (int i=0; i<strlen(h); i++) {
			if (h[i]=='O') {
				acc++; res += acc;
			}else acc = 0;
		}
		cout<<res<<"\n";
		res = 0;acc = 0;loop++;
	}
}