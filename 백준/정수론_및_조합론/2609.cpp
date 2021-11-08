/*
    date : 2021.09.17
	problom : 2609
	title : 최대공약수와 최소공배수 
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
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
    unsigned long long a, b;
        
    cin >> a >> b;
    
    cout << gcd(a, b) << "\n";
    
    cout << lcm(a, b);
    
    return 0;
}