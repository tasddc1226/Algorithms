/*
 	date : 2021.09.08
    problom : 2475
	title : 펠린드롬 수
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string num, r_num;
    while( getline(cin, num) ) {
        if (num == "0") break;
        r_num = num;
        reverse(r_num.begin(), r_num.end());
        if (r_num == num) cout << "yes\n";
        else cout << "no\n";
    }
}
