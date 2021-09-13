#include <iostream>
using namespace std;

int fact(int n){
    if (n == 1 || n == 0) return 1;
    return n * fact((n-1));
}

int main()
{
    int N;
    cin >> N;
    if (N > 12 || N < 0) return 0;
    int res = fact(N);
    cout << res;
}
