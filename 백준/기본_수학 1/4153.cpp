/*
    date : 2021.09.17
	problom : 4153
	title : 직각 삼각형 
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
    	
	while (1){
	    vector<int> v(3);
	    cin >> v[0] >> v[1] >> v[2];
	    
	    if (v[0] == 0 && v[1] == 0 && v[2] == 0){
	        break;
	    }
	    
	    sort(v.begin(), v.end());
	    
        if( v[2]*v[2] == v[0]*v[0] + v[1]*v[1]) cout << "right\n";
        else cout << "wrong\n";
	}
    return 0;
}