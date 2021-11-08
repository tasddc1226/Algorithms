/*
	date : 2021.10.15
	problom : 2581
	title : 소수
	discribe : 주어진 범위에 대하여 소수의 최소값과 소수들의 총 합을 계산해보자
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
bool isPrime(int n){
    if (n==1) return false;
    if (n==2) return true;
    if (n%2 == 0) return false;
    
    for (int i=3; i<n/2; i+=2){
        if (n%i == 0) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
    
    vector<int> v;
    int N, M, sum = 0;
    cin >> N >> M;
    
    for (int i=N; i <= M; i++){
        if (isPrime(i)) {
            sum += i;
            v.push_back(i);
        }
    }
    if (v.size() == 0){
        cout << "-1";
    }else cout << sum << "\n" << *min_element(all(v));
    
}