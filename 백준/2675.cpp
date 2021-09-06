
/*
	date : 2021.09.06
	problom : 2675
	title : 문자열 반복

*/
#include <iostream>
using namespace std;
int main()
{
    int loop, R = 0;
    string arr;
    cin >> loop;
    
    for (int i =0; i<loop; i++){
        cin >> R >> arr;
        for (int j=0; j<arr.size(); j++){
            for( int k=0; k < R; k++)
                cout << arr[j];
        }
        cout << "\n";
    }
    
}
