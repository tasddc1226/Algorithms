/*
 	date : 2022.01.13
    problom : 5430
	title : AC
    [ Todo : 배열이 비어있는데 D연산을 수행한 경우 error 처리]
 */
// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

void printV(auto a){
    cout << "[";
    for (size_t i=0; i < a.size(); i++){
        if (i == a.size()-1)
            cout << a[i];
        else
            cout << a[i] << ",";
    }
    cout << "]\n";
}
int main()
{
    int testcase;
    string func;
    string arr;
    int vSize, x;
    vector<int> v;
    
    cin >> testcase;
    
    for (int i=1; i <= testcase; i++){
        cin >> func;
        cin >> vSize;
        cin >> arr;
        
        size_t funcLen = func.length();
        size_t arrLen = arr.length();
        for (size_t j=1; j < arrLen; j+=2){
            x = arr[j] - '0';
            v.push_back(x);            
        }
        
        for (size_t j=0; j < funcLen; j++){
            if(func[j] == 'R'){
                reverse(v.begin(), v.end());
            } else {
                v.erase(v.begin());
            }
        }
        printV(v);
        v.clear();
    }
}
