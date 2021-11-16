/*
	date : 2021.09.02
	problom : 2588
	title : 곱셈
	
*/
#include <iostream>
using namespace std;
int main() {
	int num1, num2;
	cin >> num1 >> num2;
	cout << num1 * (num2 % 10) << "\n";
	cout << num1 * ((num2 / 10) % 10) << "\n";
	cout << num1 * (num2 / 100) << "\n";
	cout << num1 * num2;
	return 0;
}