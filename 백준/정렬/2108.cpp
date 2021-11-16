/*
	date : 2021.10.08
	problom : 2108
	title : 통계학
	TODO : 최빈값찾기 & 최빈값이 같다면 두번째로 작은 수를 출력하도록 [완료]
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define all(v) v.begin(), v.end()
using namespace std;

vector<int> v;
int freq[10001];
    
int inputVector(int n){
    int x, s = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        
        s += x;
        freq[x + 4000] += 1;
        v.push_back(x);
    }
    return s; // return sum
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    double n;
    cin >> n;
    double sum = inputVector(n);
    
    sort(all(v));
    
    // 평균 계산
    cout << round((double)(sum/n)) << "\n";
    
    // 중위수 계산
    cout << v[v.size() / 2] << "\n";
    
    // 최빈값 계산
    int result = *max_element(freq, freq+10000);
    int rep = 0; // 최빈값
    int cnt = 0;
    
    for (int i=0; i < 8001; i++){
        if (cnt == 2) break;
        if (freq[i] == result) {
            rep = i;
            cnt++;
        }
    }
    rep -= 4000;
    cout << rep << "\n";
    
    // 범위 계산
    int range = *max_element(all(v)) - *min_element(all(v));
    cout << abs(range) << "\n";

}
