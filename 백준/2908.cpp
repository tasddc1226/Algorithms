/*
	date : 2021.09.06
	problom : 2908
	title : 상수

*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;

int main() 
{
	string a, b;
	int num1 = 0; int num2 = 0;
	cin >> a >> b;
	
	int i_a = stoi(a);
	int i_b = stoi(b);
	
	for (int i=0; i<3; i++){
	    for (int j=2; j>=0; j--){
	        num1 += (i_a % 10) * pow(10,j);
	        num2 += (i_b % 10) * pow(10,j);
	        i_a /= 10;
	        i_b /= 10;
	    }
	}
	
	if (num1 > num2) cout << num1;
	else cout << num2;
}