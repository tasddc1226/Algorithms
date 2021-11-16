/*
    date : 2021.08.31
	problom : 1565
	title : 함수로 최소공배수 리턴하기
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int p, int q) {
    
    if ( p == 0 ) return q;
    
    return gcd( q % p, p );
}

unsigned long long lcm(auto x, auto y){
    unsigned long long R1 = x / gcd(x, y);
    unsigned long long R2 = y / gcd(x, y);
    
    unsigned long long lcm = gcd(x,y) * R1 * R2;
    
    return lcm;
}

int main()
{
    unsigned long long a, b;
        
    cin >> a >> b;
    
    cout << lcm(a, b);
    
    return 0;
}