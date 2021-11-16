#include <iostream>
#include <bitset>

using namespace std;

int main() {
    double pos;
    cin >> pos;
    
    if (pos >= 50 && pos <= 60)
        cout << "win";
    else 
        cout << "lose";
}