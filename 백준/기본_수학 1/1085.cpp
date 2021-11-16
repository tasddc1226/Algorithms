/*
	date : 2021.09.28
	problom : 1085
	title : 직사각형에서 탈출!

*/

#include <iostream>
using namespace std;
int main() {
  int x, y, w, h;
  cin >> x >> y >>w >> h;
  w -= x;
  h -= y;
  x = x >= w ? w : x;
  y = y >= h ? h : y;
  cout << (x >= y ? y : x);
}