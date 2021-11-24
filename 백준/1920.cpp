/*
 	date : 2021.11.24
    problom : 1920
	title : 수 찾기
    description : 배열의 요소를 이분탐색으로 찾아보자!
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,M;
vector<int> A;

void findElementInA(int target){
    int start = 0;
    int end = A.size();

    // find target in A
    while(end >= start){
        int mid = (start+end) / 2;
        if (A[mid] == target){
            cout << "1\n";
            return;
        } else if (A[mid] < target) {
            start = mid + 1;
        } else if (A[mid] > target) {
            end = mid - 1;
        }
    }
    
    cout << "0\n";
}

int main(){
    
    ios::sync_with_stdio(0);cin.tie(0);
    int x;
   
    cin >> N;
    for(int i=0; i<N; i++){
       cin >> x;
       A.push_back(x);
    }
    sort(A.begin(), A.end());
    // cout << "A sort OK\n";
    
    cin >> M;
    for(int i=0; i<M; i++){
       cin >> x;
       findElementInA(x);
    }
}
