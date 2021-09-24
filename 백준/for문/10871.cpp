/*
	date : 2021.09.13
	problom : 10871
	title : X보다 작은 수
    discribe : for와 if를 같이 쓰는 문제
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
    int n, x, a;
	cin >> n >> x;
	
	vector<int> v;
	for (int i=0; i<n; i++){
	    cin >> a;
	    v.push_back(a);
	    if (v[i] < x) cout << v[i] << " ";
	}
	return 0;
}