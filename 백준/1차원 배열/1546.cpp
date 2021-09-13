/*
	date : 2021.09.02
	problom : 1546
	title : 평균
	discribe : 평균을 조작해보자
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	double mean, sum=0;
	int exam, s;
	vector<double> v;
	cin >> exam;
    for(int i=0;i<exam;i++){
        cin >> s;
        v.push_back(s);
    }
    int M = *max_element(all(v));
    for(int i=0;i<exam;i++){
        v[i] = v[i]/M*100;
        sum += v[i];
    }
    mean = sum / v.size();
    cout << fixed;
    cout.precision(6);
    cout << mean;
}