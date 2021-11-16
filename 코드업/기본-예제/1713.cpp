/*
    date : 2021.08.31
	problom : 1713
	title : 두 배수의 합과 차
    
*/
#include <iostream>
#include <algorithm>
// #include <numeric> // c++ 17 -> gcd & lcm 제공
using namespace std;

int main()
{
    int a,b;
    int total = 0;
    cin >> a >> b;
    
    if (a > b) return 0;
    
    for (int i = a; i <= b; i++){
        if ( i % 12 == 0) {
            continue;
        } else if ( i % 3 == 0 ) {
            total += i;
        } else if ( i % 4 == 0 ) {
            total -= i;
        }
    }
    
    cout << total;
    return 0;
}