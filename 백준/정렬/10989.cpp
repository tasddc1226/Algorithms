// # 	date : 2021.09.14
// # 	problom : 10989
// # 	title : 백준_수 정렬하기 3
// #   discribe : N개의 수가 주어질 때, 이를 오름차순으로 정렬해보자.

// 풀이 방법
// 입력받은 수를 전부 다 입력 받아서 저장하게 되면 제한된 8MB의 메모리를 초과해버린다.
// 숫자를 카운트 해두었다가 표준출력으로 출력만 해주는 방식을 사용해야한다.
// (10^7 * 4byte = 40MB이므로)

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    int arr[10001] = {0};

    // 숫자 개수 카운트
    for(int i = 0 ; i < T; i++){
        int a;
        cin >> a;
        arr[a] += 1;
    }

    // 각 숫자를 개수만큼 출력해주기
    for(int i = 1 ; i <= 10000; i++)
        for (int j = 0; j < arr[i]; j++)
            cout << i << "\n";
}