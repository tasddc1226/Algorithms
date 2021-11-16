/*
 	date : 2021.10.13
    problom : 6591
	title : 이항 쇼다운
    discription : 각각의 n과 k값에 이항 계수를 구해보자
 */


#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
    int n, k;
    while(1) {
        cin >> n >> k;
        if ( n == 0 && k == 0 ){
            break;
        }
        long long ans = 1;
        
        // nCk = nCn-k와 같다.
        // 따라서 1000C998 = 1000C2로 바꿔서 계산하도록 하자
        if (k > n/2)
            k = n-k;
        
        for(int i=1; i <= k; i++){
            ans *= n;
            ans /= i;
            n--;
        }
        cout << ans << "\n";
        
    } 
    return 0;
}
