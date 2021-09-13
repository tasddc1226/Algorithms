/*
	date : 2021.09.13
	problom : 10430
	title : 나머지
	discribe : 네 개의 계산식을 계산
	
*/
#include <iostream>
using namespace std;
int main() {
	int A,B,C;
	cin >> A >> B >> C;
	cout << (A+B)%C << "\n";
	cout << ((A%C) + (B%C))%C << "\n";
	cout << (A*B)%C << "\n";
	cout << ((A%C) * (B%C))%C << "\n";
	
	return 0;
}