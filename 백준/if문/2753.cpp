/*
	date : 2021.09.13
	problom : 2753
	title : 윤년
	discribe : 윤년을 판별하는 문제
*/
#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    
    bool con1 = (year % 4 == 0);
    bool con2 = !(year % 100 == 0);
    bool con3 = (year % 400 == 0);
    
    if ((con1 && con2) || (con1 && con3)) cout << 1;
    else cout << 0;
	return 0;
}