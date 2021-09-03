
/*
	date : 2021.09.03
	problom : 1929
	title : 소 수 구 하 기 
*/
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int a){
    if (a<=1) return false;
    for (int i = 2; i <= sqrt(a) ; i++){
        if ( a % i == 0 ) return false;
    }
    return true;
}
            
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int m, n;
    
    cin >> m >> n;
    
    for (int i = m; i <= n; i++){

        if ( isPrime(i) ) {
            cout << i << "\n";
        }
    }
}
