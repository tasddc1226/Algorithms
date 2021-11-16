/*
 	date : 2021.09.09
    problom : 1920
	title : 수 찾기
    discribe : 배열을 정렬하고 이분 탐색을 적용해보자
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   int N,M;
   long long int x;
   vector<int> A;
   vector<int> B;
   
   cin >> N;
   for(int i=0; i<N; i++){
       cin >> x;
       A.push_back(x);
   }
   
   cin >> M;
   for(int i=0; i<M; i++){
        cin >> x;
        B.push_back(x);
        auto it = find(A.begin(), A.end(), B[i]);
        if (it != A.end()) cout << 1;
        else cout << 0;
        cout << "\n";
   }

}
