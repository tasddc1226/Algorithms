
/*
	date : 2021.09.02
	problom : 8958
	title : OX 퀴즈
	[ 미제출, 미완성 ]
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	vector<string> v;
	string s;
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
	    getline(cin, s);
	    v.push_back(s);
	}
	
	for(string i : v)
	    cout << i << "\n";
    
	return 0;
}