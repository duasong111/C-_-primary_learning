#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
void process(vector<string> *t) {
    t->push_back("wudi");
}
unsigned myCnt() {
    static unsigned iCnt = -1;
    ++iCnt;
    return iCnt;
}
int main()
{
    //去返回一个vector值
    vector<string> list;
    list.push_back("fisr");
    process(&list); //以采用指针的形式来进行vector进行数值的传输
    for (auto c : list) {
        cout << c << endl;
    }
   /* cout << "输入任意字符后进行回车" << endl;
    char ch;
    while (cin >> ch) {
        cout << "函数myCnt()的执行次数是:" << myCnt() << endl;
    }*/
    
}
