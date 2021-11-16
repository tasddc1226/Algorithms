/*
 	date : 2021.09.17
    problom : 2164
	title : 카드 2
 */

#include <iostream>
#include <queue>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	queue<int> q;

    int N, front, result = 0;
    cin >> N;
    
    // 카드가 1장일때는 계산하지 않고 1 리턴
    if (N == 1){
        cout << 1;
        return 0;
    }
    for (int i=1; i<=N; ++i){
        q.push(i);
    }
    while(q.size() != 1){
    	q.pop();
    	front = q.front();
    	q.pop();
    	q.push(front);
    	result = q.front();
    	
    }
	cout <<result;
}