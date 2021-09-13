

/*
	date : 2021.09.07
	problom : 1929
	title : 벌집 
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
