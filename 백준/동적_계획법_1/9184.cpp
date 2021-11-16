/*
 	date : 2021.09.08
    problom : 9184
	title : 신나는 재귀 함수
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cache[21][21][21];

int w(int a, int b, int c) {
    
    // 문제에서 제시한 기저 예 2가지
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    }
    else if ( a > 20 || b > 20 || c > 20) {
        return w(20, 20, 20);
    }
    int &result = cache[a][b][c];
    if (result != 0) return result;
    
    // 문제에서 준 나머지 조건 2가지
    if (a < b && b < c){
        result = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    }
    else {
        result = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
    }
    return result;
}

int main()
{
    int a, b, c;
    
    while(1){
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a,b,c) << "\n";
    }
}
