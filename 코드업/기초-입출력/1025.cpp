#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main ()
{
    vector<int> res = {};
    int num;
    
    cin >> num;
    
    for (int i = 0; i < 5; i++){
        res.push_back((num % 10) * pow(10, i));
        num /= 10;
    }
    
    for (int i = 4; i >= 0; i--)
        cout << "[" << res[i] << "]" << endl;
    
}