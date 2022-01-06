
/*
	date : 2022.01.06
	problom : 11729
	title : 하노이 탑 이동 순서
	discribe : 재귀 방식으로 하노이타워의 이동 순서와 최소 이동 횟수를 구해보자
*/

#include <iostream>
using namespace std;
void hanoi(int n, int start, int to, int bypass)
{
    if(n == 1)
        cout << start << " " << to << "\n";
    else {
        hanoi(n-1,start,bypass,to);
        cout << start << " " << to << "\n";
        hanoi(n-1,bypass,to,start);
    }
}
int main() {
    int num;
    cin >> num;
    // 1<<num == 2^num
    cout << (1<<num) -1 << "\n"; 
    hanoi(num,1,3,2);
}