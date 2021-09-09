#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    const int high = 170;
    int t1, t2, t3;
    
    cin >> t1 >> t2 >> t3;
    
    vector<int> tunnel = {t1, t2, t3};
    
    
    for (int i : tunnel) {
        // cout << i;
        if (high >= i) {
            cout << "CRASH " << i;
            return 0;
        }
    }
    
    cout << "PASS";
    
}