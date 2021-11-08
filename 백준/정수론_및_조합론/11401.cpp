/*
 	date : 2021.10.13
    problom : 11401
	title : 이항 계수 3
 */
#include <iostream>
#include <algorithm>
#define MAX 1001
#define MODULER 1000000007

using namespace std;

long long int fact(long long int N){
    long long int fac = 1;
    while(N > 1){
        fac = (fac * N) % MODULER;
        N--;
    }
    return fac;
}

// 역원을 구하는 함수
// base : 밑, expo : 지수
// 거듭 제곱을 분할 정복 방식으로 해결
long long int pow(long long base, auto expo) {
    // 지수가 1이면 base^1 이므로 base % P 리턴
    if (expo == 1) return base % MODULER;

    // 지수의 절반에 해당하는 base^(expo / 2)
    long long int temp = pow(base, expo / 2);

    if (expo % 2 == 1){
        return (temp * temp % MODULER) * base % MODULER;
    }
    return temp * temp % MODULER;
}


int main(){
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

    long long int N, K;
    cin >> N >> K;
    
    // 분자 N!
    long long int numer = fact(N);

    // 분모 (K! * (N-K)!) mod p
    long long int denom = fact(K) *fact(N - K) % MODULER;

    // N! * 분모의 역원(K! * (N-K)!)
    cout << (numer * pow(denom, MODULER - 2) % MODULER);
}
