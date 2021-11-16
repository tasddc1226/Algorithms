/*
 	date : 2021.09.09
    problom : 15829
	title : Hashing
    [ 부분 성공 ]
 */
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
const long long  int r = 31;
const long long int M = 1234567891;
long long size;
string str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    char c;
    long long int H=0;
    vector<int> num;
    
    cin >> size;
    for (long long int i=0; i<size; i++){
        cin >> c;
        str[i] = c;
    }
    
    auto it = str.begin();
    for (long long int i=0; i<size; i++){
        num.push_back( int(*it) - 96 );
        it++;
    }
    
    H += num[0];
    for (int i=1; i<size; i++){
        long long p = pow(r,i);
        if (p > M) {
            p = p % M;
            H += num[i]*pow(p,i);
        } else {
            H += num[i]*p;
        }
        if (H > M) H = H % M;
    }
    cout << H;
       
}
