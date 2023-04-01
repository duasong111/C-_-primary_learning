#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
typedef double x; //其实这里就是和宏定义的效果是一样的
//constde 常量 常量指针  顶层 底层..
int main()
{
    string s;
    while (getline(cin, s))
        cout << s;
    cout << s << endl;
    return 0;
}
