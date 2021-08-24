#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int grade, cls, i_num;
    string s_num, s_cls;
    cin >> grade >> cls >> i_num;
    
    if (cls < 10) {
        s_cls = '0' + to_string(cls);
    } else {
        s_cls = to_string(cls);
    }
    
    
    if (i_num < 10){
        s_num = '0' + to_string(i_num);
        s_num = '0' + s_num;
    } else if (i_num > 10 && i_num < 100) {
        s_num = '0' + to_string(i_num);
    } else {
        s_num = to_string(i_num);
    }

    
    cout << grade << s_cls << s_num;
    
    return 0;
  
}
