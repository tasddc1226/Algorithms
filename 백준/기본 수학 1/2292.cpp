/*
    date : 2021.09.07
    problom : 2292
    title : 벌집 
    discribe : 벌집이 형성되는 규칙에 따라 벌집의 위치를 구해보자
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int cnt=1;
  int N, beehive = 1;
  cin >> N;
  while ( N > beehive ){
      beehive += 6 * cnt;
      cnt++;
  }
  cout << cnt;
}
