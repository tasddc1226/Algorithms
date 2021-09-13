/*
	date : 2021.09.13
	problom : 11022
	title : A+B - 8
    discribe : 바로 위의 문제보다 아름답게 출력
*/
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
    int n, a, b;
    cin >> n;
    
    for (int i=1; i<=n; i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << "\n";
    }
}