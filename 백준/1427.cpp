/*
 	date : 2021.09.07
    problom : 1427
	title : 소트인사이드
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  string num;
  vector<int> v;
  getline (cin, num);
  for ( char i : num ) {
      int x = int(i);
      v.push_back(x);
  }
  sort(v.begin(), v.end(), greater<char>());
  
  for (char i: v) {
      cout << i;
  }
}
