/*
	date : 2021.10.15
	problom : 4948
	title : 베르트랑 공준
	discribe : 주어진 범위에 대하여 소수의 개수를 구해보자
*/

#include <iostream>
using namespace std;

int prime_arr[250000];
    
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, ans;
    cin >> n;
    while(n != 0){
        for (int i=0; i < 2*n; i++){
            prime_arr[i] = 0;
        }
        
        for (int i = 2; i <= 2*n; i++){
            for (int j=i+i; j <= 2*n; j+=i){
                if (prime_arr[j] != 1)
                    prime_arr[j] = 1;
            }
        }
        
        for (int i = n+1; i <= 2*n; i++){
            if (prime_arr[i] == 0){
                ans++;
            }
        }
        cout << ans << "\n";
        ans = 0;
        cin >> n;
    }
}
