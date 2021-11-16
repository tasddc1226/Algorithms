
/*
	date : 2021.09.06
	problom : 1725
	title : 히스토그램에서 가장 큰 직사각형
    category : stack, 이분 탐색, 세그먼트 트리
    [ 6549번 문제와 동일함. 출력 형태만 다름! ]
*/


// 예시 입력
// 7
// 2
// 1
// 4
// 5
// 1
// 3
// 3

// 예시 출력
// 8

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int N, ans, h[100002];
stack<int> s;

int main() 
{
    // 히스토그램의 가로 칸의 수 입력
	cin >> N; 

    // N개 만큼의 직사각형 높이 입력
	for (int i = 1; i <= N; i++) cin >> h[i];

    // 오류 방지를 위해 0을 push
	s.push(0);
	for (int i = 1; i <= N + 1; i++)
	{
        
		while (!s.empty() && h[s.top()] > h[i])
		{
			int check = s.top();
			s.pop();
			ans = max(ans, h[check]*(i - s.top() - 1));
		}
		s.push(i);
	}
	cout << ans;
	
}