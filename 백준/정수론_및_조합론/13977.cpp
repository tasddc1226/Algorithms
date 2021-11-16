

#include <iostream>
#include <algorithm>
#define MAX 4000001

using namespace std;

long long MODULER = 1000000007;
long long dp[MAX];

// 라이브러리에 있는 pow함수는 N의 시간복잡도를 가지므로 직접 구현
// log N 만에 계산하도록 함
long long pow(long long base, long long expo){
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
    // 입출력 속도 함수 사용 안하면 TLE 발생
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);	cout.tie(NULL);

    int N, K, M;
    
    cin >> M;
    dp[0] = 1;
    // Factorial[]만 미리 구해놓는 방법
    for (int i=1; i < MAX; i++){
        dp[i] = dp[i-1] * i;
        dp[i] %= MODULER;
    }
    
    for (int i=0; i < M; i++){
        cin >> N >> K;
        // 분자를 Up, 분모를 Down으로 설정하고 각 factorial을 구함
        long long up = dp[N];
        long long down = (dp[K] * dp[N-K]) % MODULER;
        // Down의 값이 분자와 곱해지기 위해 페르마의 소정리 적용
        down = pow(down, MODULER - 2) % MODULER;
        cout << (up * down) % MODULER << "\n";
    }
    return 0;
    
}
