/*
    date : 2021.08.31
	problom : 4943
	title : 순서 섞기
    [ 틀린 풀이 ]
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int cnt = 0;
vector<int> A;
vector<int> B;


bool check() {
    for (int i = 0; i < N-1; i++){
        if ( A[i] <= A[i+1] ) continue;
        else return false;
    }
    return true;
}

void sort(vector<int>::iterator l, vector<int>::iterator r){
    for (int i = 0; i < N; i++){
      if (A.size() == 1){
          B.push_back(*l);
          break;
      }
      
      if (*l <= *r){
          B.push_back(*l);
          l++;
      } else {
          B.push_back(*r);
          r--;
      }
    }
    
    // copy : B -> A
    A.clear();
    A.resize(N);
    copy(B.begin(), B.end(), A.begin());
    B.clear();
    B.resize(N);
    
    // sort count 증가
    cnt++;
}

int main ()
{
  int x;
  cin >> N;
  
  // input A
  for (int i = 0; i < N; i++){
      cin >> x;
      A.push_back(x);
  }
  
  vector<int>::iterator left;
  vector<int>::iterator right;
  

  while(true){
      if (check()){
          break;
      }
      left = A.begin();
      right = A.end()-1;
      sort(left, right);
      
  }
  
  cout << cnt;
  
}