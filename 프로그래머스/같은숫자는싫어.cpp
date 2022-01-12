#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.push_back(arr[0]);
    
    for (int i = 1, j = 0; i < arr.size(); i++) {
        if (arr[i] == answer[j]) {
            continue;
        } else {
            answer.push_back(arr[i]);
            j++;
        }
    }
    
//  sort(arr.begin(), arr.end()); // sort를 진행하면 찐 중복 제거

    // arr.erase(unique(arr.begin(), arr.end()), arr.end()); 
    // vector<int> answer = arr;
    

    return answer;
}