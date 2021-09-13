/*
	date : 2021.09.13
	problom : 2439
	title : 별 찍기 - 2
    discribe : 별을 찍는 문제 2
*/
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
    int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		for (int j = 1; j <= i; ++j) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}