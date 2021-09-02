/*
	date : 2021.09.02
	problom : 1110
	title : 더하기 사이클
	
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int n, newNum,p, q ,cnt=0;
	cin >> n;
	
    while (1){
        
        p = n / 10;
        q = n % 10;
        
        newNum = (q * 10) + ((p + q) % 10);
        cout << newNum << "\n";
        cnt++;
        
        if (newNum == n){
            cout << cnt;
            break;
        }
    }
	return 0;
}