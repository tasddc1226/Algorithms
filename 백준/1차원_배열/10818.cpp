/*
	date : 2021.09.13
	problom : 10818
	title : 최소, 최대
	discribe : 최댓값과 최솟값을 찾는 문제
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	vector<int> v;
	int n, x;
	cin >> n;
	
	for (int i=0; i<n; i++){
	    cin >> x;
	    v.push_back(x);
	}
	
	cout << *min_element(all(v)) << " " <<  *max_element(all(v));
	
	return 0;
}