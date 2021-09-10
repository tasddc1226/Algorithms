#include<string>
#include<vector>
#include<cmath>
#include<iostream>

using namespace std;
long long solution(long long n){
    if ((int)sqrt(n) == sqrt(n)) return (sqrt(n)+1)*(sqrt(n)+1);
    else return -1;
}

main(){
    int res = solution(3); 
    int res1 = solution(121) 
    cout << res; // -1
    cout << res1; // 144
}