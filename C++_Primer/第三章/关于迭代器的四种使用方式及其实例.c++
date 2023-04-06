#include <algorithm>
#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> t{ 23,45,67,2 }; //现在t是一个数组
    for (auto &c : t) {
        cout << c << " ";
        c *= c;//看到没，解引用其实是在你可以去修改他的值的时候去使用的
       
    }
    cout << "\n";
    for(auto x: t)
    cout << x << " ";
    cout << "\n";
    vector<int>::iterator  it = t.begin(); //这个才是标准的迭代器
    //vector<int>::const_iterator  it;//这种的鼎业是只是允许去读但是不允许去改
    for (it; it != t.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    for (auto im = t.begin(); im != t.end(); im++) {
        cout << *im << " ";
    }
    cout << "\n";
    for (decltype(t.size()) ni = 0; ni != t.size(); ni++) {
        cout << t[ni] << " ";
    }//怎么说呢的decltype更像是获取类型然后使用进行访问
    cout << "\n";
    vector<int>::size_type m=t.size();
    cout <<"该vector的长度为:"<< m << " ";
   
    //取代上次实用的那个二维数组来进行分数段的统计
    vector<unsigned> score(11, 0);
    unsigned grade;
    while (cin>>grade)
    {
        if (grade <= 100)
            ++score[grade / 10];
    }//上次使用了俩一位数组
}
