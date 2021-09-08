/*
 	date : 2021.09.08
    problom : 1003
	title : 피보나치 함수
 */
#include<iostream>
using namespace std;
long fiboarr[50] = {0, 1,};
long fibo(int n){
    if (n==0 || n==1) return fiboarr[n];
    else if(fiboarr[n] == 0) fiboarr[n] = fibo(n-1) + fibo(n-2);
    return fiboarr[n];
}
int main(){
    int loop;
    cin >> loop;
    int temp;
    for (int i=0; i<loop; i++){
        cin >> temp;
        if (temp == 0) printf("%d %d\n", 1, 0);
        else {
            cout << fibo(temp-1) << " " << fibo(temp) << "\n";
        }
    }
}