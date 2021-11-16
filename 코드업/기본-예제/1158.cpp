#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int pos;
    cin >> pos;
    
    if (pos >= 30 && pos <= 40 || pos >= 60 && pos <= 70)
        cout << "win";
    else 
        cout << "lose";
}
