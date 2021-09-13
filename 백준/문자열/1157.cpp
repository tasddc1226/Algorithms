
/*
	date : 2021.09.06
	problom : 1157
	title : 단어 공부
    discribe : 주어진 단어에서 가장 많이 사용된 알파벳을 출력하기
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main()
{
    vector<int> c;
    vector<int> cnt;
    vector<int> v;
    string arr;
    cin >> arr;
    for (int j=0; j<arr.size(); j++){
        v.push_back(arr[j]);
    }    
    for (int i=65; i<=90; i++){
        int max = count(all(v), i) + count(all(v), i+32);
        if (max != 0) {
            c.push_back(i); // push char
            cnt.push_back(max); // push char count
        }
    }    
    int m_idx = max_element(cnt.begin(), cnt.end()) - cnt.begin();
    if ( count(cnt.begin(), cnt.end(), cnt[m_idx]) >= 2 )
        cout << "?";
    else 
        cout << char(c[m_idx]);
}

