/*
 	date : 2021.12.16
 	problom : 1107
 	title : 리모컨
    discribe : 채널 100에서 N으로 이동하는데, 사용하지 못하는 리모컨 번호를 고려해서 최소한의 버튼 클릭으로 이동해보자.
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// 리모컨의 상태를 나타내는 vector
// 0 : 정상, 1 : 고장
vector<bool> remote(10);

// 입력 : n (0 ~ 1000000) - 이동하려고 하는 채널
//       -  1000000까지인 이유? 
//          => 문제에서 이동하려고 하는 채널 N의 범위가 0 ~ 500000 이지만,
//             이동하려는 채널보다 높은 위치에 있을 때 감소하는 범위도 고려해야 하므로..
// 출력 : len - 리모컨을 누른 횟수
int check(int n) {
    // 이동하려고 하는 채널이 0인 경우
    if (n == 0){
        if (remote[0]){
            // 리모컨의 "0" 버튼이 고장난 경우
            return 0;
        } else {
            // 리모컨의 "0" 버튼이 정상인 경우 : 리모컨으로 0을 누르면 되므로 1을 리턴
            return 1;
        }
    }

    // 이동하려고 하는 채널이 0이 아닌 경우
    int len = 0;
    // 각 자리수에 대해서 나머지 연산을 통해 한 자리수씩 뽑아내어 고장난 버튼이 있는지 판별
    while(n > 0){
        // 리모컨의 버튼이 고장난 경우
        if (remote[n % 10])
            // remote[3456 % 10] = remote[6] => 리모컨의 6 버튼이 고장인 경우
            return 0;
        
        // 리모컨의 버튼이 고장나지 않은 경우
        n = n / 10;
        len += 1;
    }
    // 리모컨을 누른 횟수 반환
    return len;
}

int main(){
    // N : 이동하려고 하는 채널
    // broke : 리모컨의 고장난 숫자의 개수
    int N, broke = 0;    
    cin >> N >> broke;
    
    // 고장난 숫자의 개수만큼 반복
    for (int i=0; i < broke; i++){
        int x;
        cin >> x;
        // 고장난 숫자에 대한 bool값 true로 변경
        remote[x] = true;
    }
    
    // count : 리모컨을 누른 최소 횟수
    int count = abs(N - 100); // 최초로 연산자(+,-)만 사용해서 몇번 눌러야 이동할 수 있는지 계산

    // 리모컨의 숫자를 누른 횟수를 구하기 위한 반복문 : 브루트포스 알고리즘
    for (int i=0; i <= 1000000; i++){
        int c = i;
        // len : c에 대해 반환된 리모컨을 누른 횟수
        int len = check(c);
        // 만약 len이 0보다 크다면
        if (len > 0) {
            // press : 누른 번호에서 이동하려하는 채널까지의 사용해야 하는 연산자(+, -) 횟수 계산
            int press = abs(c - N);
            // 최초 100번 채널에서, 연산자만 가지고 몇번을 눌러야 도달할 수 있는지에 대한 count 변수와,
            // (리모컨에서 누른 번호에서부터 이동하려하는 채널까지 연산자를 눌러야하는 횟수)
            // + (c에 대해 반환된 리모컨을 누른 횟수)를 비교하여 더 작은 값을 count에 저장
            if (count > press + len)
                count = press + len;
        }
    }
    // 최종적으로 가장 최소의 값을 출력
    cout << count;
    return 0;

}
