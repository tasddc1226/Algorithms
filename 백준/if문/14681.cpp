/*
	date : 2021.09.13
	problom : 14681
	title : 사분면 고르기
	discribe : 점이 어느 사분면에 있는지 판별
*/
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    
    bool q1 = (x > 0 && y > 0);
    bool q2 = (x < 0 && y > 0);
    bool q3 = (x < 0 && y < 0);
    
    if (q1) cout << 1;
    else if (q2) cout << 2;
    else if (q3) cout << 3;
    else cout << 4;
}