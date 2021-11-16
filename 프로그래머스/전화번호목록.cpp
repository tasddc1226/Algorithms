/*
	date : 2021.08.30
	problom : 해시
	title : 전화번호 목록
	
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool ans = true;
    sort(phone_book.begin(), phone_book.end());
    
    for (int i = 0 ; i < phone_book.size() - 1; i++) {
        if (phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size())) return false;
    }
    return ans;
    
}