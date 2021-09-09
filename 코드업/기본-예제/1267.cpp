/*
    date : 2021.08.31
	problom : 1267
	title : n개의 수 중 5의 배수의 합 
    
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    int sum = 0;
    vector<int> arr;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> x;
        arr.push_back(x);
    }
    
    for (int i = 0; i < n; i++){
        if ( arr[i] % 5 == 0){
            sum += arr[i];
        }
    }
    
    cout << sum; 
    
    return 0;
}