/*
	date : 2021.09.13
	problom : 9498
	title : 시험 성적
	discribe : 시험 점수를 성적으로 바꾸는 문제
*/
#include <iostream>
using namespace std;
int main() {
	int score;
	cin >> score;
	if (score >= 90) cout << "A";
	else if (score >= 80) cout << "B";
	else if (score >= 70) cout << "C";
	else if (score >= 60) cout << "D";
	else cout << "F";
	return 0;
}