#include <vector>
#include <iostream>
using namespace std;
int main()
{
	//string name1;
	vector<string> name;
	//cin >> name1;
	name.push_back("wahei"); //数据填充
	name.insert(name.begin(), "niub"); //数据前插
	name.insert(name.end(), "back"); //数据后插
	
	for (vector<string>::iterator it = name.begin(); it != name.end(); it++) {
		cout << *it << endl; //迭代全部输出
	}
	cout << "长度:" << name.size() << endl;
	name.pop_back(); //弹出

	cout << "长度:" << name.size() << endl; //计算长度
	name.erase(name.begin() + 1);

	
	cout << "长度:" << name.size() << endl;
	name.clear();
	cout << "长度:" << name.size() << endl;

	return 0;
}
