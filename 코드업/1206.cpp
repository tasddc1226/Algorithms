/*
    date : 2021.08.31
	problom : 1206
	title : 배수
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, N;
    cin >> a >> b;
        
    if (a % b == 0) {
        N = a / b;
        cout << b << "*" << N << "=" << a;
    } else if ( b % a == 0) {
        N = b / a;
        cout << a << "*" << N << "=" << b;
    } else {
        cout << "none";    
    }
    
    
    
    return 0;
}