#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    sort(times.begin(), times.end());
    
    long long min_time = 1;
    long long max_time = (long long) times.back() * n;
    long long mid = 0;
    
    while( min_time <= max_time ){
        mid = (min_time + max_time) / 2;
        long long CanDo = 0;
        
        for (int i = 0; i < times.size(); i++) {
        
            CanDo += mid / times[i];
            // printf("%d ", CanDo);
        }
        // printf("\n");
        
        if ( CanDo < n )
            min_time = mid + 1;
        else {
            if (mid <= max_time)
                answer = mid;
            max_time = mid - 1;
        }
        
    }
    
    return answer;
}