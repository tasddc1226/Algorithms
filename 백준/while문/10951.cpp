/*
	date : 2021.09.02
	problom : 10951
	title : A+B -4
	discribe : 입력이 끝날 때까지 A+B 출력 EOF에 대한 내용
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int a, b;
	
    while (cin >> a >> b){
        cout << a+b << "\n";
    }
	return 0;
}