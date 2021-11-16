/*
    date : 2021.08.31
	problom : 2102
	title : 배수
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long N;
const unsigned long long lim = 11111111111111111111;
unsigned long long minVal = UINT64_MAX;

void solution(unsigned long long start) {
    if (start % N == 0)
        minVal = min(minVal, start);
    
    if (start > lim / 10)
        return;
    
    solution(start * 10 + 1);
    solution(start * 10);
}

int main()
{
    cin >> N;
    
    if ( N > lim ) {
        cout << 0;
        return 0;
    }
    
    solution(1);
    
    if (minVal == UINT64_MAX)
        cout << 0;
    else cout << minVal;
    return 0;
}