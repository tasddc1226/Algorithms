// date : 2021.09.16
// problom : 11866
// title : 요세푸스 문제 0

#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> q;
    
    for (int i=0; i<n; i++)
        q.push(i+1);
    cout << "<";
    while(1){
        for (int i=1; i<k; ++i){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();
        if (!q.empty()){
            cout << ", ";
        } else {
            break;
        }
    }
    cout << ">";


}
