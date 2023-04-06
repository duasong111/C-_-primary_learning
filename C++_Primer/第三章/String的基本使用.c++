#include <math.h>
#include <stdio.h>
#include<iostream>
#include<string>

#include<cctype> //对字符串的String处理
using namespace std;

int main()
{
	string line;
	/*while (getline(cin, line))
		if(!line.empty())
		cout << line << endl;*/
   //使用getline来进行持续不断地输入
	string s("Hello World!");



	//其实这里的for循环的使用就是进行单字符的遍历
	/*for (auto c : s)
		cout <<"不使用初始化:"<< c;*/


	decltype(s.size())
		punct_cnt = 0;
	for (auto c : s) //这个就是相当于那个迭代的初始化
		++punct_cnt; //这个计算的过程是空格算一
	cout <<"字符串的长度："<<punct_cnt << "字符串的输出:" << s << endl;

  //利用for语句来进行大写操作
	string t("nihaoa");
	for (auto &c : t) //这里添加取地址符是为了引用的目的
		c = toupper(c); //来进行大写的操作
	cout << t << endl;

	//for(decltype(t.size()) index=0; 
	//	index!=s.size()&& !isspace(t[index]);
	//	++index)  //for循环的牛逼版本使用
	//	s[index] = toupper(s[index]);

	//使用下标去执行随机访问
	const string hexdigits = "0123456789ABCDEF"; //这个就是想当于在数组里进行存储
	cout << "Enter a series of number between 0 and 15:";
	string result;
	string::size_type n;
	/*while (cin >> n)*/ //可以进行多个数的输入
	cin >> n;
		if (n < hexdigits.size()) //先取判断有没有越界
			result += hexdigits[n]; //直接记住下标进行输出
	cout << "Your hex number is:" << result << endl;

	return 0;
}
