/*
 	date : 2021.09.08
    problom : 11050
	title : 이항 계수 1
    [ 재귀로 풀었지만 DP로도 풀어보자. ]
 */

#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;
static int binomial(int n, int k) {
    
    if(n==k || k==0) return 1;
    
    return binomial(n-1, k-1) + binomial(n-1,k);
}

static int binomial_coefficient(int n, int k){
    int dp[MAX][MAX];
    int m;
    for (int i=0; i <= n; i++){
        m = (i < k)? i : k;
        for (int j=0; j <= m; j++){
            if (j == 0 || j == i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    return dp[n][k];
}

int main()
{
    // 1<= N <=10 , 0<= K <= N
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    
    

    // cout << binomial(N, K) << "\n"; // 재귀
    cout << binomial_coefficient(N, K); // dp
    
}
