#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
        
    
    
    for (int i = 0; i < size; i++){

        for (int j = i, k = 1; k <= size; j++, k++){
            
            if( j == size ) j = 0;
            
            cout << arr[j] << " ";
        }
        cout << endl;
        
    }
    
}
