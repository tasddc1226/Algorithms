#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;
    cin >> str;
    
    int f_size = str.length() - str.find(".") - 1;
    int dotpos = str.find(".");
    
    string s_num1 = str.substr(0, dotpos);
    string s_num2 = str.substr(dotpos+1);
    cout << s_num1 << endl << s_num2 << endl;

 
}