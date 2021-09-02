/*
	date : 2021.09.02
	problom : 2884
	title : 알람 시계
	
*/
#include <iostream>
using namespace std;
int main() {
    int h, m;
    cin >> h >> m;
    if ( m >= 45 ) cout << h << " " << m-45;
    else {
        m = 60 - abs(m - 45);
        if ( h == 0 ) h = 23;
        else h--;
        cout << h << " " << m;
    }
}