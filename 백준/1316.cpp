/*
 	date : 2021.09.07
    problom : 1316
	title : 그룹 단어 체커
 */
#include<iostream>
using namespace std;

bool chk(string str){
    bool alpa[26] = {false};
    for(size_t i=0; i<str.length(); ++i){
        if (alpa[str[i]-'a']) return false;
        else {
            char tmp = str[i];
            alpa[str[i]-'a']= true;
            
            while(1){
                if (tmp != str[++i]){
                    i--;
                    break;
                }
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    
    int count=0;
    
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if (chk(str)) count++;
        
    }
    cout << count;
}