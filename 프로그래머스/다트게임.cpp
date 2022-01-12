#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int calBonus(int s, char b)
{
    if (b == 'S'){
        return pow(s, 1);
    } else if (b == 'D') {
        return pow(s, 2);
    } else return pow(s, 3);
    
}

int main()
{
    // "점수|보너스|[옵션]"으로 이루어진 문자열 3세트.
    string result = "";
    char bonus[3] = {'S', 'D', 'T'};
    vector<int> scores;
    cin >> result;
    
    int idx = 0;
    int attempt = 3;
    //size_t size = result.length();
    
    while(attempt != 0){
        
        // get score
        int score = 0;
        if (result[idx] == '1') {
            if (result[idx+1] == '0') {
                score = 10;
                idx += 2;
            } else {
                score = 1;
                idx++;
            }
        } else {
            score = atoi(result.c_str()+idx);
            // cout << "!! score " << score << "\n";
            idx++;
        }
        // cout << score << "\n";
        
        for (int i =0; i < 3; i++){
            if (result[idx] == bonus[i]){
                score = calBonus(score, bonus[i]);
                idx++;
                break;
            }
        }
        // cout << "after bonus : " << score << "\n";
        scores.push_back(score);
        
        if (result[idx] == '*') {
            if (scores.size() == 1) {
                scores[0] *= 2;
            } else if (scores.size() == 2) {
                scores[0] *= 2;
                scores[1] *= 2;
            } else {
                scores[1] *= 2;
                scores[2] *= 2;
            }
            idx++;
        } else if (result[idx] == '#') {
            if (scores.size() == 1) {
                scores[0] *= -1;
            } else if (scores.size() == 2) {
                scores[1] *= -1;
            } else {
                scores[2] *= -1;
            }
            idx++;
        } else {
            
        }
        attempt--;
        
    }
    
    int totalScore = 0;
    for (int i=0; i < 3; i++) {
        totalScore += scores[i];
    }
    
    cout << totalScore;
    
}
