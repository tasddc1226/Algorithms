#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int cnt = 0;
    bool bonus = false;
    vector<int> lotto(7);
    vector<int> user(6);
    
    for (int i = 0; i < 7; i++)
        cin >> lotto[i];
    
    for (int i = 0; i < 6; i++)
        cin >> user[i];
    
    // cout << "lotto : ";
    // for (int i : lotto)
    //     cout << i << " ";    
    // cout << endl;
    
    // cout << "user lotto : ";
    // for (int i : user)
    //     cout << i << " ";
    // cout << endl;
    
    for (int i = 0; i < user.size(); i++){
        vector<int>::iterator it = find(lotto.begin(), lotto.end(), user[i]);
        // cout << "*it : " << *it << endl;
        
        // bonus hit
        if (*it && *it == lotto.at(6)){
            bonus = true;
        
        // hit
        } else if (*it) {
            cnt++;
            
        // no hit
        } else {
            continue;
        }
    }
    
    cout << "cnt : " << cnt << "  bonus : " << bonus << endl;
    
    if (cnt == 6 && bonus == false){
        cout << 1;
    } else if (cnt == 5 && bonus == true) {
        cout << 2;
    } else if (cnt == 5) {
        cout << 3;
    } else if (cnt == 4) {
        cout << 4;
    } else if (cnt == 3) {
        cout << 5;
    } else {
        cout << 0;
    } 
    
    
}