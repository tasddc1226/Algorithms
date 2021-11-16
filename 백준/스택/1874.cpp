/*
 	date : 2021.09.09
    problom : 1874
	title : 스택 수열
    summary
    - 1부터 n까지의 수를 스택에 넣었다가 뽑아 나열하면서 하나의 수열을 만들 수 있음.
    - 이때 스택에 push 하는 순서는 반드시 오름차순이어야 함.
    - 임의의 수열이 주어질 때, 스택을 사용해 그 수열을 만들 수 있는지 없는지 판단.
    - 만들 수 있다면, 어떤 순서로 push와 pop을 진행해야 하는지 +와 -로 출력.
 */
#include<iostream>
#include<stack>
using namespace std;
int main() {
    char sol[200050];
    int solptr(0);
    int n, x, max(0);
    cin >> n;
 
    stack<int> s;
    while (n--) {
        cin >> x;
        if ( x > max ) {
            for ( int i = max+1; i <= x; i++ ) {
                s.push(i);
                sol[solptr++] = '+';
            }
        } else if (s.top() != x) {
                cout << "NO";
                return 0;
        }
        s.pop();
        sol[solptr++] = '-';
        if (max < x) max = x;
    }
    for (int i = 0;i < solptr;i++) cout << sol[i] << "\n";
 
    return 0;
}
