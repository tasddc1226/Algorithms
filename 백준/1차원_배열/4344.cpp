
/*
	date : 2021.09.03
	problom : 4344
	title : 평균은 넘겠지
	discribe : 과연 그럴까?
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#define all(v) v.begin(), v.end()
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double overMeanStuNum = 0;
	double numOfStu = 0;
	int score;
	double mean;
	double sum = 0;
    double overMeanRate = 0;

	vector<double> v;	
    int loop = 1; // loop count
	int n; // test case
	
	cin >> n;
	
	while (n >= loop) {
		cin >> numOfStu;
		
		for (int i=0; i < numOfStu; i++) {
			cin >> score;
			v.push_back(score);
			sum += v[i];
		}
		mean = sum / numOfStu;
// 		cout << "mean: " << mean << "\n";
		
		for (int i=0; i < numOfStu; i++){
		    if (v[i] > mean) overMeanStuNum++;
		}
		overMeanRate = (overMeanStuNum / numOfStu) * 100;
		
		cout << fixed;
    	cout.precision(3);
    	cout << overMeanRate << "%\n" ;
    	
    	// reset
    	v.clear();
    	overMeanStuNum = 0;
    	overMeanRate = 0;
		mean = 0;
		sum = 0;
		loop++;
	}
	
}