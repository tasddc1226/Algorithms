/*
    date : 2021.08.31
	problom : 1088
	title : 3의 배수는 통과?
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if ( N < 0 || N > 100) return 0;
    
    for (int i = 1; i <= N; i++){
        if ( i % 3 == 0 ) continue;
        
        cout << i << " ";
    }
    return 0;
}