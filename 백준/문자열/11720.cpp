/*
	date : 2021.09.06
	problom : 11720
	title : 숫자의 합
    discribe : 정수를 문자열로 입력받는 문제
*/
#include <iostream>
using namespace std;
int main()
{
    int n, total = 0;
    cin >> n;
    char arr[n];
    cin >> arr;
    for(int i=0; i<n; i++)
        total += arr[i] - '0';
    cout << total;
}
