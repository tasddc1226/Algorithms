/*
	date : 2021.09.02
	problom : 1110
	title : A+B - 5
    discribe : 0 0이 들어올 때까지 A+B를 출력
	
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int a, b;
	
    while (1){
        cin >> a >> b;
        if (a ==0 && b == 0) break;
        else cout << a+b << "\n";
    }
	return 0;
}