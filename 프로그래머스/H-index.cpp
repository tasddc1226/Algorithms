/*
	date : 2021.08.30
	problom : 정렬
	title : H-index
	
*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0; 

    // 내림차순 정렬
    sort(citations.begin(), citations.end(), greater<int>());
    // 인용수가 0이면 H-index는 0
    if (!citations[0]) return 0; 
    
    for(int i = 1; i <= citations.size(); i++) {
        if ( citations[i-1] >= i ) {
            answer++;
        } else {
            break;
        }
    }
    
    return answer;
}