#include <iostream>
using namespace std;

// 입력 : 3 5 2

int main()
{
  int min, num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  
  if (num1 >= num2){
      min = num2;
  } else {
      min = num1;
  }
  
  if (min > num3){
      min = num3;
  }
      
  
  cout << min;
}
