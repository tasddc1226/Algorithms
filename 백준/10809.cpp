
/*
	date : 2021.09.06
	problom : 10809
	title : 알파벳 찾기

*/
#include <iostream>
using namespace std;
int main()
{
    string arr;
    cin >> arr;
    for(int i=97; i<=122; i++){
        int j=0;
        while(arr[j] != 0){
            if (arr[j] == (char)i) break;
            j++;
        }
        if (arr[j] == (char)i) cout << j << " ";
        else cout << "-1 ";
    }
    
}
