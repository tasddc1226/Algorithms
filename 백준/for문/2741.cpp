/*
	date : 2021.09.13
	problom : 2741
	title : N 찍기
    discribe : 1부터 N까지 출력하는 문제
*/
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++){
        cout << i << "\n";
    }
}