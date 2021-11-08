/*
	date : 2021.09.13
	problom : 2562
	title : 최댓값
	discribe : 최댓값이 어디에 있는지 찾는 문제
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
	int x;
	
	for (int i=0; i<9; i++){
	    cin >> x;
	    v.push_back(x);
	}
	cout << *max_element(all(v)) << "\n" <<  (max_element(all(v)) - v.begin()) + 1;
	return 0;
}
