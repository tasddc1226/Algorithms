#include <iostream>

using namespace std;

bool isPrime(int a){
    if (a == 2) return true;
    if (a % 2 == 0) return false;
    
    for (int i = 3; i < a/2 ; i += 2){
        if ( a % i == 0 ) return false;
    }
    return true;
}
            
int main() {
    int n;
    bool flag = true;
    
    cin >> n;
    
    for (int i = 2; i < n; i++){

        if ( isPrime(i) ) {
            if ( isPrime(n / i) && (n % i == 0) && flag ) {
                cout << i << " " << (n / i) << endl;
                flag = false;
            } else if (!flag) {
                break;
            }
        }
    }
    if (flag) cout << "wrong number";
}
