#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    
    int idx = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
    
    return answer + to_string(idx) + "에 있다";
}