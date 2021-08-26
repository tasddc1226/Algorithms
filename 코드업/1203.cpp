#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int bmi;
    cin >> bmi;
    
    if (bmi > 20){
        cout << "비만" << endl;
    } else if (bmi > 10) {
        cout << "과체중" << endl;
    } else {
        cout << "정상" << endl;
    }
    
}
