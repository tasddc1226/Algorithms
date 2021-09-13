/*
 	date : 2021.09.08
    problom : 11050
	title : 이항 계수 1
    [ 재귀로 풀었지만 DP로도 풀어보자. ]
 */

#include <iostream>
#include <algorithm>
using namespace std;
static int binomial(int n, int k) {
    
    if(n==k || k==0) return 1;
    
    return binomial(n-1, k-1) + binomial(n-1,k);
}

int main()
{
    // 1<= N <=10 , 0<= K <= N
    int N, K;
    cin >> N >> K;
    
    int res = binomial(N, K);
    cout << res;
    
}
