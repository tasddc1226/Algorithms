/*
	date : 2021.09.13
	problom : 2739
	title : 구구단
    discribe : 구구단 출력
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 9; i++)
        cout << n << " * " << i << " = " << n*i << endl;
}