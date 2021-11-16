#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, cnt;
    cin >> n;
    
    for (int i = 1; i <= 9; i++) {
        cnt = n * i;
        for (int j = 1; j <= cnt; j++){
            cout << "*";
        }
        cout << endl;
    }
}
