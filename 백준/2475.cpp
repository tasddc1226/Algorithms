/*
 	date : 2021.09.08
    problom : 2475
	title : 검증수
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, sum = 0;
    for (int i=0; i<5; i++){
        cin >> x;
        x = pow(x, 2);
        sum += x;
    }
    int res = sum % 10;
    cout << res;
}
