
/*
	date : 2022.01.06
	problom : 11653
	title : 소인수분해
	discribe : 입력한 정수 n에 대하여 2부터 소인수 분해를 해보자
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  for (int i=2; i <= sqrt(n); i++ ){
      while(n % i == 0) {
          cout << i << "\n";
          n /= i;
      }
  }
  if (n!=1) cout << n;
  
}
