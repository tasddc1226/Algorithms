/*
    date : 2021.09.06 
    problom : 2751
    title : 수 정렬하기 2
    discribe : 언어에 내장된 정렬 함수를 사용해보자.
 */
#include <iostream>
#include <algorithm>
#include <vector>
#define all(v) v.begin(),v.end()
using namespace std;

int main()
{
    
  int N, x;
  cin >> N;
  vector<int> v;
  for (int i=0; i<N; i++){
    cin >> x;
    v.push_back(x);
  }
  sort(all(v));
  for (int i:v) cout << i << "\n";
}
