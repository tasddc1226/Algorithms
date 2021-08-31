/*
    date : 2021.08.31
	problom : 4545 
	title : 배수
    limit : 5 Sec
    [ 다시 풀어볼 것 !]
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <ctime>
using namespace std;

// count number in string
int diff(string s){
    int res = 0;
    vector<int> chk(s.length(),0 );
    for ( int i = 0; i < s.length(); i++) {
        if (chk[i] == 0) {
            res++;
            for (int j = 0; j < s.length(); j++){
                if (s[i] == s[j])
                    chk[j] = 1;
            }
        }
    }
    return res;
}

int main()
{
    int N, nomore = 0;
    int old_cnt = 0;
    int new_cnt = 0;
    string num = "";
    static string s_num = "";
    
    cin >> N;
    
    
    if (N > 30000) return 0;
    
    
    for (unsigned long long i = 1; 1 ; i++){        
        if ( i == 1 ) {
            num = to_string(N * i);
            s_num = num; // static
            old_cnt = diff(num); // 초기 입력의 숫자 수
            if (old_cnt == 1) { // 한 자리 숫자면 배수를 찾을 필요도 없음.
                cout << num;
                break;
            }
        }
        
        num = to_string(N * i);
        new_cnt = diff(num);
        cout << i << endl;
        if ( new_cnt < old_cnt ) {
            cout << num;
            break;
        } 
        // else if ( new_cnt > 5 ) {
        //     nomore++;
        // } 
        // else if ( nomore > 3 ) {
        //     cout << "no more!!\n";
        //     cout << s_num;
        //     break;
        // }
    }
   
    
    return 0;
}

// 입력 : 38
// 출력 : 222222222222222222
// 222222222222222222는 38의 배수이고, 2라는 숫자 하나만 가지고 표현 가능
// unsigned long long N = 222222222222222222;
    
//     unsigned long long R = N / 38;
    
//     cout << R << endl;
    
//     unsigned long long A = 5847953216374269;
    
//     cout << A * 38;