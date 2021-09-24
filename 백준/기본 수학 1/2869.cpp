
/*
	date : 2021.09.03
	problom : 2869
	title : 달팽이는 올라가고 싶다.
    discribe : 달팽이의 움직임을 계산해보자
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, v, result;
    cin >> a >> b >> v;
    
    // V길이의 막대를 낮에 A만큼 오르고 B만큼 떨어짐
    int OneDayCanClimb = (v-a)%(a-b);
    if (OneDayCanClimb == 0) result = (v-a)/(a-b);
    else result = (v-a)/(a-b) +1;
    
    // 1일부터 계산
    cout << result + 1;    
}
