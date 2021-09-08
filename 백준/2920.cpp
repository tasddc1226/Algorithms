/*
 	date : 2021.09.08
    problom : 2920
	title : 음계
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    vector<int> asc = {1,2,3,4,5,6,7,8};
    vector<int> dec = {8,7,6,5,4,3,2,1};
    
    vector<int> v;
    for (int i=0; i<8; ++i){
        cin >> x;
        v.push_back(x);
    }
    
    if (v == asc) cout << "ascending";
    else if (v == dec) cout << "descending";
    else cout << "mixed";
    
    

}
