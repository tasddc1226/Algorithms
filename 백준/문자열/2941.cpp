/*
 	date : 2021.09.07
    problom : 2941
	title : 크로아티아 문자 찾기
    discribe : 크로아티아 알파벳의 개수를 세어보자
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int idx;
    vector<string> words= {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string str;
    cin >> str;
    
    for (size_t i=0; i < words.size(); i++){
        while(1){
            idx = str.find(words[i]);
            if(idx == string::npos) break;
            str.replace(idx, words[i].length(), "@");
        }
    }
    
    cout << str.length();
    
}