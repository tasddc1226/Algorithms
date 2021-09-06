
/*
	date : 2021.09.06
	problom : 1152
	title : 단어의 개수

*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define all(v) v.begin(), v.end()
using namespace std;
// trim from left
inline string& ltrim(string& s, const char* t = " \t\n\r\f\v") {
    s.erase(0, s.find_first_not_of(t));
    return s;
} 
// trim from right
inline string& rtrim(string& s, const char* t = " \t\n\r\f\v") {
    s.erase(s.find_last_not_of(t) + 1);
    return s;
} 
// trim from left & right
inline string& trim(string& s, const char* t = " \t\n\r\f\v") {
    return ltrim(rtrim(s, t), t);
}

int main()
{
    string v;
    getline(cin, v);
    
    trim(v);
    
    int spaceCnt = count(all(v), 32);
    if ( v.length() == spaceCnt ) cout << 0;
    else cout << spaceCnt+1;

}


