#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int grade, cls, i_num;
    string s_num;
    cin >> grade >> cls >> i_num;
    
    if (i_num < 10){
        s_num = '0' + to_string(i_num);
    } else {
        s_num = to_string(i_num);
    }
    
    cout << grade << cls << s_num;
  
}
