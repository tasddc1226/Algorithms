/*
    date : 2021.09.02
	problom : 4545 
	title : 배수
    limit : 5 Sec
    [ 백준 2595와 동일, 코드 이해 ]
*/

#include <bitset>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

#define x first
#define y second
#define all(v) v.begin(), v.end()
#define compress(v) sort(all(v)), v.erase(unique(all(v)), v.end())
using namespace std;

int n;
vector<int> comb[1 << 10];
int prv[70707];
int mv[70707];
int chk[70707];

int valid(int bit) {
	queue<int> q;
	for (auto j : comb[bit]) if (j) {
		int i = j % n;
		chk[i] = 1;
		q.push(i);
		mv[i] = j;
	}
	while (q.size()) {
		int v = q.front();
		q.pop();
		if (!v) return 1;
		for (auto j : comb[bit]) {
			int i = (v * 10 + j) % n;
			if (!chk[i]) {
				prv[i] = v;
				mv[i] = j;
				chk[i] = 1;
				q.push(i);
			}
		}
	}
	return 0;
}

void solution() {
	cin >> n;
	vector<string> v;
	int cnt;
	for (int i = 0; i < (1 << 10); i++) {
		memset(prv, -1, sizeof(int) * (n + 10));
		memset(chk, 0, sizeof(int) * (n + 10));
		if (v.size() && cnt < comb[i].size()) break;

		if (valid(i)) {
			string s;
			for (int j = 0; j != -1; j = prv[j]) {
				s += char(mv[j] + '0');
			}
			reverse(all(s)); // 결과 문자열 s를 뒤집기.
			v.push_back(s); // s를 v에 push
			cnt = comb[i].size();
		}
	}

	sort(all(v), [](const string &a, const string &b) {
		if (a.size() != b.size()) return a.size() < b.size();
		return a < b;
	});
	cout << v[0] << "\n";
}

int main() {
	// C++ 표준 스트림들이 C 표준 스트림들과 각각의 입출력 연산 후 동기화 할지 여부 설정
	// 동기화를 끔 -> 입출력 순서들이 보장되지 않는다. 하지만, 입출력 연산 속도를 크게 향상 시킬 수 있음!
	ios_base::sync_with_stdio(false); 
	cin.tie(nullptr);

	// bit : 0 ~ 2^10
	for (int bit = 0; bit < (1 << 10); bit++) {
		// i : 0 ~ 9 까지 사용할 숫자
		for (int i = 0; i < 10; i++) {
			// bit와 2^i과 and연산이 참이면 push
			if (bit & (1 << i)) comb[bit].push_back(i);
		}
	}
	// comb를 오름차순으로 정렬
	sort(comb, comb + 1024, [](const vector<int> &a, const vector<int> &b) {
		return a.size() < b.size();
	});
	int t = 1;
	while (t--) solution();
}