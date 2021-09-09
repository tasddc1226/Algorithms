#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
      
    double hight, weight, std_weight, bmi;
    
    cin >> hight >> weight;
    
    std_weight = (hight - 100) * 0.9; 
    
    bmi = (weight - std_weight) * 100 / std_weight;
    
    if (bmi > 20) {
        cout << "비만";
    } else if (bmi >= 10) {
        cout << "과체중";
    } else {
        cout << "정상";
    }


    
}