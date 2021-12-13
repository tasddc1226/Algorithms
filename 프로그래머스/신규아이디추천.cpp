
/*
 	date : 2021.12.13
 	title : 신규 아이디 추천
*/
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string new_id) {
    string toDelete = "~!@#$%^&*()=+[{]}:?,<>/";
        
    // step 1
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    
    // step 2
    for (size_t i=0; i<toDelete.length(); i++){
        for (size_t j=0; j<new_id.length(); j++){
            if( toDelete[i] == new_id[j]){
                new_id.erase(remove(new_id.begin(), new_id.end(), toDelete[i]), new_id.end());
            }
        }
    }
    // step 3
    // int dotCnt = 0;
    // for (size_t i=0; i<new_id.length(); i++) {
    //     if (new_id[i] == '.'){
    //         dotCnt++;
    //     } else {
    //         if(dotCnt >= 2) {
    //             int startPos = i - dotCnt;
    //             new_id.erase(startPos, dotCnt-1);
    //             dotCnt = 0;
    //         }
    //     }
    // }
     for(int i = 1; i < new_id.length(); ){
        if (new_id[i] == '.' && new_id[i - 1] == '.'){
            new_id.erase(new_id.begin() + i);
            continue;
        }
        else i++;
    }
    
    // step 4
    if (new_id.front() == '.') new_id.erase(new_id.begin());
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    
    // step 5
    if (new_id.length() == 0){
        new_id = "a";
    }
    
    // step 6
    if (new_id.length() >= 16) {
        new_id.erase(15, new_id.length());
    }
    if (new_id.back() == '.') new_id.erase(new_id.end() - 1);
    
    // step 7
    if (new_id.length() <= 2) {
        while (new_id.length() != 3){
            new_id += new_id.back();
        }
    }
    
    return new_id;
}