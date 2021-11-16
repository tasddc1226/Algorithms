/*
	date : 2021.09.02
	problom : 1008
	title : A / B
	
*/
#include <iostream>
using namespace std;
int main() {
	double a,b;
	cin >> a >> b;
	cout << fixed; // 소수점 자리수 고정하는 표현
    cout.precision(12); // 소수점 아래를 6으로 고정
	cout << a / b;
	return 0;
}