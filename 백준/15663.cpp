#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// size: N, choice : M
// 1 <= M <= N <= 8
int N, M, arr[8], res[8];
bool chk[8] = { false };

void solution(int cnt){
    
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        return;
    }
    int xx = 0;
    for (int i = 0; i < N; i++) {
        if (!chk[i] && arr[i] != xx) {
            res[cnt] = arr[i];
            xx = res[cnt];
            chk[i] = true;
            solution(cnt + 1);
            chk[i] = false;
        }
    }
}
        
int main (){
    
    cin >> N >> M;
    
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+N);
    // sort(arr.begin(), arr.end());
    // arr.resize( unique(arr.begin(), arr.end()) - arr.begin()); 
    
    solution(0);
    
    return 0;
  
}