#include <vector>
#include <iostream>
using namespace std;
bool isPrime(int n){
    if (n==1) return false;
    if (n==2) return true;
    if (n%2 == 0) return false;
    
    for (int i=3; i<n/2; i+=2){
        if (n%i == 0) return false;
    }
    return true;
}
int solution(vector<int> nums){
    int answer = 0;
    int sum = 0;
    int size = nums.size();
    if (3 == size){
        sum = nums[0]+nums[1]+nums[2];
        if ( isPrime(sum) ) answer++;
    } else {
        for (int i=0; i<size; i++){
            for (int j=i+1; j<size; j++){
                for (int k=j+1; k<size; k++){
                    sum = nums[i] + nums[j] + nums[k];
                    if ( isPrime(sum) ) answer++;
                    sum = 0;
                }
            }
        }
    }
    
    return answer;
}

int main()
{
  vector<int> v={1,2,3,4}; // 1
  vector<int> v={1,2,7,6,4}; // 4
  cout << solution(v);
}
