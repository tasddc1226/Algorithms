#include <string>
#include <vector>

using namespace std;

int first[5] = {1, 2, 3, 4, 5};
int second[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int thrid[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int score[3] = {0,};
    int max_score = 0;
    
    for (int i=0; i < answers.size(); ++i){
        if (first[i % 5] == answers[i]) { score[0] +=1; }
        if (second[i % 8] == answers[i]) { score[1]+=1; }
        if (thrid[i % 10] == answers[i]) { score[2]+=1; }
    }
    max_score = max(max(score[0], score[1]), score[2]);
    for (int i=0; i<3; i++){
        if (score[i] == max_score)
            answer.push_back(i + 1);
    }
    
    return answer;
}