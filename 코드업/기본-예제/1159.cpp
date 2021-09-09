#include <iostream>
using namespace std;

int main() {
    int pos;
    cin >> pos;
    
    if (pos >= 50 && pos <= 70 || (pos % 6) == 0)
        cout << "win";
    else 
        cout << "lose";
}
