/*
 	date : 2021.09.08
    problom : 1011
	title : Fly me to the Alpha Centauri
    discribe : 거리에 따른 장치 사용 횟수를 출력해보자
 */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T,i;
    cin >> T;
    long long a;
    long long x, y, dist;
    
    for (i=0; i<T; i++){
        cin >> x >> y;
        dist = y - x;
        a = (int)sqrt(dist);
        // 거리(dist) 값이 a의 제곱수인 경우
        if( (dist) == a*a ) cout << (2 * a) - 1 << "\n";
        // 거리 값이 a의 제곱수 보다는 크고 a의 제곱수에 +a보다는 작은 경우
        else if ( a*a < dist && dist <= a*a+a ) cout << (2 * a)<< "\n";
        // 거리 값이 a의 제곱수에 +a 보다 크고 (a+1) * (a+1) 보다는 작은 경우
        else if ( a*a+a < dist && dist < (a+1) * (a+1) ) cout << (2*a+1)<< "\n";
        
    }
}