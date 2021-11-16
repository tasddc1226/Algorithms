/*
    date : 2021.08.31
	problom : 1155
	title : 7의 배수
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if ( N < 0 ) return 0;
    
    for (int i = 7; i <= N; i*=7){
        if ( N % i == 0 ) {
            cout << "multiple";
            return 0;
        }
    }
    cout << "not multiple";
    
    return 0;
}