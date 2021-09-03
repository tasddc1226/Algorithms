
/*
	date : 2021.09.03
	problom : 2750
	title : 정 렬 하 기  
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
    int n,x;
    
    cin >> n;
    
    
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    
    for(int i =0; i < n; i++)
        cout << v[i] << "\n";
}
