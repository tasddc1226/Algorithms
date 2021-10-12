/*
 	date : 2021.10.12
    problom : 1966
	title : 프린터 큐
    discription: 우선순위 큐를 사용해서 프린터 큐를 구현해보자
 */

#include <iostream>
#include <queue>
using namespace std;
int main() {
    int cnt = 0;
    int t;
    cin >> t;
    int n, m, pri;
    for (int i=0; i < t; ++i){
        cnt = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int j=0; j<n; ++j){
            cin >> pri;
            q.push({j, pri});
            pq.push(pri);
        }
        while(!q.empty()){
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                ++cnt;
                if(index == m){
                    cout << cnt << "\n";
                    break;
                }
            }
            else q.push({index, value});
        }
    }
}