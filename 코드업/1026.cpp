#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main ()
{
    string z_time = "0";
    string time, s_time;
    cin >> time;
    
    int colon_pos = time.find(":");
    s_time = time.substr(colon_pos+1);
    
    int colon_pos_1 = s_time.find(":");
    s_time = s_time.substr(0, colon_pos_1);
    
    if (!s_time.compare("00")){
        cout << z_time << endl;
    } else {
        cout << s_time << endl;
    }
    
    
}