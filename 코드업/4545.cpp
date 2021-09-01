/*
    date : 2021.09.01
	problom : 4545 
	title : 배수
    limit : 5 Sec
    [ BFS로 다시 풀어볼 것 !]
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <time.h>
#include <vector>
using namespace std;

// 몇 개의 숫자로 이루어졌는지 count하는 함수
// 입력 : N -> string
// 반환값 : string을 구성하고 있는 숫자의 총 개수
int diff(string s){
    int res = 0;
    vector<int> chk(s.size(), 0);
    for ( int i = 0; i < s.size(); i++) {
        if (chk[i] == 0) {
            res++;
            for (int j = 0; j < s.size(); j++){
                if (s[i] == s[j])
                    chk[j] = 1;
            }
        }
    }
    return res;
}

int main()
{
    int N = 0;
    int old_cnt = 0;
    int new_cnt = 0;
    string num = "";
    static string s_num = ""; // 초기 입력 숫자 N에 대한 string 변수

    // time 관련 변수 선언
    clock_t start, end;
    double time = 0;
    
    cin >> N;
    
    // 입력값이 30000보다 크면 종료
    if (N > 30000) return 0;
    
    start = clock();
    for (unsigned long long i = 1; time < (5 * CLOCKS_PER_SEC) ; i++){  
        // 첫번째 for문 진입 시 수행      
        if ( i == 1 ) {
            num = to_string(N * i); // N의 1배수를 문자열로 변환 후 num변수에 저장.
            s_num += num;         // static 변수에도 마찬가지로 저장.
            old_cnt = diff(num); // 초기 입력에 대해 표현되어질 수 있는 숫자의 개수 저장.
            // cout << "s_num : " << s_num << endl;
            // cout << "old_cnt : " << old_cnt << endl;
            if (old_cnt == 1 || N % 10 == 0) { 
                cout << num;
                return 0;
            }
        }
        
        // printf("%.0lf sec\n", (double)time / CLOCKS_PER_SEC);
        
        
        // N의 2배수부터 더 적은 숫자로 표현되어질 수 있는 N*i를 찾음.
        else {
            num = to_string(N * i);
            new_cnt = diff(num);
            // N의 배수를 더 작은 개수의 숫자로 표현될 수 있을 경우
            if ( new_cnt < old_cnt ) {
                cout << num; // 찾은 숫자 즉, N의 i 배수를 출력함.
                return 0;
            }
        }
        
        
        end = clock();
        time += (end - start);
    }
    
    // 시간 내에 찾지 못한 경우
    cout << s_num;

    return 0;
}



// 입력 : 38
// 출력 : 222222222222222222
// 222222222222222222는 38의 배수이고, 2라는 숫자 하나만 가지고 표현 가능
// unsigned long long N = 222222222222222222;
    
//     unsigned long long R = N / 38;
    
//     cout << R << endl;
    
//     unsigned long long A = 5,847,953,216,374,269; 18,446,744,073,709,551,615
    
//     cout << A * 38;