
/*
 	date : 2021.11.22
    problom : 11478
	title : 서로다른 부분 문자열의 개수
 */

#include <iostream>
#include <string.h>
#include <set>
using namespace std;

#define MAX_LEN 1000+1

int main(){
    set<string> string_set;
    char input_str[MAX_LEN];
    scanf("%s", input_str);
    int input_str_len = strlen(input_str);
    
    for (int i = 1; i <= input_str_len; ++i){
        for (int j = 0; j < input_str_len - i+1; ++j){
            int start = j;
            int end = j + i;
            string sub_string(input_str + start, input_str + end);
            string_set.insert(sub_string);
        }
    }
    
    cout << string_set.size();
    
    return 0;
}
