// 블랙잭
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;


int main ()
{
    int n, m, sum = 0;
    int old_sum = 0;
    int i, j, k;
    cin >> n >> m;
    
    vector<int> v(n);
    
    for (i = 0; i < n; i++)
        cin >> v[i];
        
    sort(v.begin(), v.end());

    if (n == 3) {
        for (i = 0; i < 3; i++)
            sum += v[i];
        cout << sum;
    } else {
        // cout << "N > 3!";    
        for (i = 0; i < n; i++){
            for (j = i+1; j < n; j++){
                for (k = j+1; k < n; k++){
                    // cout << "i : " << i << " " << "j : " << j << " " << "k : " << k << endl;
                    sum += v[i] + v[j] + v[k];
                    // cout << "sum : " << sum << endl;
                    if (sum == m){
                        cout << sum;
                        return 0;
                    } 
                    else if (sum < m && old_sum < sum) {
                        old_sum = sum;
                    }
                    sum = 0;
                }
            }
        }
    }
    cout << old_sum << endl;
    return 0;
}