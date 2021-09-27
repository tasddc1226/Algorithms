/*
	date : 2021.09.27
	problom : 2108
	title : 통계학
	TODO : 최 빈 값 찾 기 
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define all(v) v.begin(), v.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    vector<int> v;
    int n,x, sum = 0;
    float mean = 0.0;
    int range = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    // cout << "size: " << v.size() << "\n";
    sort(all(v));
    
    mean = sum / v.size();
    cout << "mean: " << round(mean*10)/10 << "\n";
    
    cout << "median: " << v[v.size() / 2] << "\n";
    
    range = *max_element(all(v)) - *min_element(all(v));
    cout << "range: " << abs(range) << "\n";
    
}
