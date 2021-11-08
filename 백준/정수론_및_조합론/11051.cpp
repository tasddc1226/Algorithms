/*
 	date : 2021.10.13
    problom : 11051
	title : 이항 계수 2
 */


#include <iostream>
#include <algorithm>
#define MAX 1001
#define MODULER 10007
using namespace std;

static int binomial_coefficient(int n, int k){
    int dp[MAX][MAX] = {0};
    for (int i=1; i <= n; i++){
        dp[i][1] = i;
        dp[i][i] = dp[i][0] = 1;
    }
    for (int i=3; i <= n; i++){
        for (int j=2; j < i; j++)
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MODULER;
    }
    return dp[n][k]% MODULER;

    // int dp[MAX][MAX] = {0};
    // int m;
    // for (int i=0; i <= n; i++){
    //     m = (i < k)? i : k; <- k보다 더 큰 열의 원소들은 dp[n][k]를 구하는데 사용 될 리가 없음.
    //     for (int j=0; j <= m; j++){
    //         if (j == 0 || j == i) dp[i][j] = 1;
    //         else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MODULER;
    //     }
    // }
    // return dp[n][k]% MODULER;
}

int main(){
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    cout << binomial_coefficient(N, K); // dp
}
