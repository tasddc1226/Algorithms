/*
 	date : 2021.10.14
    problom : 2775
	title : Boj_부녀회장이 될테야
 */

#include <iostream>
using namespace std;

int apt[101][15];

int main()
{
  int t;
  cin >> t;
  
  while(t--){
    int k, n; // k <= 1, n <= 14
      cin >> k >> n;
      
      for (int i=0; i <= k; i++){
          
          for (int j=1; j <= n; j++){
              if (i == 0) {
                  apt[0][j] = j;
              }
              else if (j == 1){
                  apt[i][1] = 1;
              }
              else {
                  apt[i][j] = apt[i][j-1] + apt[i-1][j];
              } 
          }
          
      }
      cout << apt[k][n] << "\n";
  }
}
