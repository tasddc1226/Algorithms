/*
	date : 2021.09.13
	problom : 15552
	title : 빠른 A+B
	
*/
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
    int n, a, b;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        cout << a+b << "\n";
    }
}