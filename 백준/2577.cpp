/*
	date : 2021.09.02
	problom : 2577
	title : 숫자의 개수
	
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v(10, 0);
	int a, b, c, q;
	int big;
	cin >> a >> b >> c;
	big = a*b*c;

	while (big > 0) {
		q = (big % 10);
		v[q]++;
		big /= 10;
	}

	for (int i = 0; i<10; i++)
		cout << v[i] << "\n";

	return 0;
}
