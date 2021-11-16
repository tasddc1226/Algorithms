#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    double x;
    cin >> x;
    cout << fixed; // 소수점 자리수 고정하는 표현
    cout.precision(6); // 소수점 아래를 6으로 고정
    cout << x;

}