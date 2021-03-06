/*
	date : 2021.09.03
	problom : 2750
	title : 수 정렬하기
    discribe : 시간복잡도가 O(n^2)인 정렬 알고리즘(버블, 삽입)으로 풀어보자
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
