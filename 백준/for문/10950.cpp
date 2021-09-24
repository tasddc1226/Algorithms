/*
	date : 2021.09.13
	problom : 10950
	title : A+B - 3
    discribe : A+B를 여러번 출력
*/
#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        cout<<a+b<< "\n";
    }
}