#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a, x;
    cin >> a >> x;
    
    short short1 = a;
    bitset<8> bitset1(short1);
    // cout << bitset1 << endl;     

    short short2 = short1 >> x; 
    bitset<8> bitset2(short2);
    cout << short2 << endl;     
    

}

