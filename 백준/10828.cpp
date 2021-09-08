/*
 	date : 2021.09.08
    problom : 10828
	title : 명령어로 C++ 스택 제어
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int T,x;
    string command;
    cin >> T;
    stack<int> s;
    
    for (int i=0; i<T; ++i){
        cin >> command;
        if (command == "push"){
            cin >> x;
            s.push(x);
            // cout << "push ok\n";
            
        } else if (command == "pop"){
            // do pop
            if (s.empty()) cout << "-1\n";
            else {
                cout << s.top() << "\n";;
                s.pop();
            }
            
        } else if (command == "empty"){
            // check stack is empty
            if (s.empty()) cout << "1\n";
            else cout << "0\n";
            
        } else if (command == "size"){
            // return stack size
            cout << s.size() << "\n";
            
        } else {
            // return stack top
            if (s.empty()) cout << "-1\n";
            else cout << s.top() << "\n";
            
        }
    }
}
