#include <iostream>
#include <cstdlib>
using namespace std;

void cal(double num1, double num2, char oper){
    int res;
    switch (oper){
        case '+' :
            res = num1 + num2;
            cout << res;
            break;
        case '-' :
            res = num1 - num2;
            cout << res;
            break;
        case '*' :
            res = num1 * num2;
            cout << res;
            break;
        case '/' :
            float f_res;
            f_res = num1 / num2;
            cout << fixed;
            cout.precision(2);
            cout << f_res;
            break;
    }
}

int main()
{
    int x, y;
    char type;
    cin >> x >> type >> y;
    
    if (y == 0) {
        return 0;
    }
    cal(x, y, type);
}