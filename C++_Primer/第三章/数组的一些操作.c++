#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    //数组
    unsigned cnt = 42; //unsigned（无符号类型） 采用了补码的形式
    constexpr unsigned sz = 42;
    int *parr[sz];
    string m[sz]; //因为那个sz是常量
    int ia[] = { 1,2,3,4,5,6,7,8,9 };
    int* beg = begin(ia); //头指针
    int* last = end(ia); //尾指针
   
    auto ia1(ia); //因为那个ia1 是关于ia的指针类型
    *ia1 = 42;//
    ia1[0] = 42;
    ia1[4] = 99; //更改他们的数值
    cout << ia[0] << endl;
    cout << ia[4] << endl;
}
