/*
 	date : 2021.09.08
    problom : 1978
	title : 소수 찾기
    discribe : 2부터 X-1 까지 모두 나눠서 X가 소수인지 판별하는 문제 1
 */
#include<iostream>
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
    int T,i,a;
    cin >> T;
    int cnt=0;
    
    for (i=0; i<T; i++){
        cin >> a;
        bool prime = isPrime(a);
        if (prime) cnt++;
    }
    
    cout << cnt;
}