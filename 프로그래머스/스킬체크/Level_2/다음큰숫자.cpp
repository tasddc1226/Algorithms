#include <string>
#include <vector>
#include <iostream>

using namespace std;

int countOne(string s){
    int cnt = 0;
    for (int i=0; i < s.size(); i++) {
        if (s[i] == '1') cnt++;
    }
    return cnt;
}

int toBinaryAndCountOne(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    int cnt = countOne(r);
    
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int oneCountN = toBinaryAndCountOne(n);

    for (int i=n+1; n <= 1000000; i++) {
        if (oneCountN == toBinaryAndCountOne(i)) {
            answer = i;
            break;
        }
    }
    
    return answer;
}