/*
    date : 2021.08.31
	problom : 1260
	title : 3의 배수의 합
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
        
    for (int i = a; i <= b; i++) {
        
        if ( i % 3 == 0 )
            sum += i;
        
    }
    
    cout << sum; 
    
    return 0;
}