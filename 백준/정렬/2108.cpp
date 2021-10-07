/*
	date : 2021.09.28
	problom : 2108
	title : 통계학
	TODO : 최빈값찾기 & 최빈값이 같다면 두번째로 작은 수를 출력하도록
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define all(v) v.begin(), v.end()
using namespace std;

vector<int> v;
int n, range = 0;
float mean = 0.0;
    
int inputVector(int n){
    int x, s = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
        s += x;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n;
    
    int sum = inputVector(n);
    
    sort(all(v));
    // 평균 계산
    mean = sum / v.size();
    cout << "mean: " << round(mean*10)/10 << "\n";
    // 중위수 계산
    cout << "median: " << v[v.size() / 2] << "\n";
    // 범위 계산
    range = *max_element(all(v)) - *min_element(all(v));
    cout << "range: " << abs(range) << "\n";
    
    // TODO : 최빈값 계산하기


}
