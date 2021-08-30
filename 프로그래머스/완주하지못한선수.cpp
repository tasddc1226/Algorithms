/*
	date : 2021.08.30
	problom : 해시
	title : 완주하지 못한 선수
	
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for (int i = 0; i < participant.size(); i++){
        if (participant[i] != completion[i]) {
            answer = participant[i];
            break;
        }
    }
    
    return answer;
}