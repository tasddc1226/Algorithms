/*
	date : 2021.09.02
	problom : 3052
	title : 나머지
	discribe : 위와 비슷한 문제
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	int a, cnt, res=0;
	vector<int> v;
	
	for(int i=0; i<10; i++){
	    cin >> a;
	    v.push_back(a % 42);
	}
	
	for(int i=0; i<10; i++){
	    cnt=0;
	    for (int j=i+1; j<10; j++){
    	    if (v[i] == v[j]) cnt++;
	    }
	    if (cnt==0) res++;
	}
	cout << res;
	
	return 0;
}