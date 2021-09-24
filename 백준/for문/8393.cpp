/*
	date : 2021.09.13
	problom : 8393
	title : 합
    discribe : 1부터 N까지의 합을 구하는 문제
*/
#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << sum;
}