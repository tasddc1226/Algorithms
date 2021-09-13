/*
	date : 2021.09.13
	problom : 1330
	title : 두 수 비교하기
	discribe : 두 수를 비교한 결과를 출력
*/
#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2) cout << ">";
	else if (num1 < num2) cout << "<";
	else cout << "==";
	return 0;
}