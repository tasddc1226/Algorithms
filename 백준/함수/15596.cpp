
/*
	date : 2021.09.03
	problom : 15596
	title : 정수 N개의 합
    discribe : 함수를 구현해 보자
*/

#include <iostream>
#include <vector>

using namespace std;
long long sum(vector<int> &a) {
    long long ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans += a[i];
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3,4,5,6,7,8,9,10};
    int result = sum(v);
    cout << result;
}
