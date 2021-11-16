#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v(5);
    for (int i = 0; i < 5; i++){
        cin >> v[i];
    }
    
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    
    cout << max << endl << min;
}
