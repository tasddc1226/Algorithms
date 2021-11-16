/*
	date : 2021.08.30
	problom : 정렬
	title : K번째 수
	
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> sub_arr;
    
    for (int i = 0; i < commands.size(); i++){
        
        for (int j = commands[i][0] - 1 ; j < commands[i][1]; j++){
            sub_arr.push_back(array[j]);
        }
        
        // sort
        sort(sub_arr.begin(), sub_arr.end());
        
        // push value arr[commands[i][2]-1] to answer
        answer.push_back(sub_arr[commands[i][2] - 1]);
        
        // clear sub_arr
        sub_arr.clear();
        vector<int>().swap(sub_arr);
    }
    
    
    return answer;
}