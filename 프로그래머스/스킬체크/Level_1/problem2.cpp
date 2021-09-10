#include <vector>
#include <string>
#include <iostream>
using namespace std;

double solution(vector<int> arr){
    double answer = 0;
    int size = arr.size();
    double sum = 0;
    
    for(int i=0; i<size; ++i){
        sum += arr[i];
    }
    answer = sum / size;
    
    
    return answer;
}

int main()
{
  vector<int> v={5,5}; // 5
  cout << solution(v);
}
