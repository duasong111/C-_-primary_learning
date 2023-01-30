

//#include<iostream>  vector
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<int> name; //是数组
//	for (int i = 0; i < 5; i++) {
//		name.push_back(i);
//	}
//	
//	name.erase(name.begin() + 2);
//	for (vector<int>::iterator it = name.begin(); it != name.end(); it++) {
//		cout << *it << endl;
//	}
//	//name.insert(name.end(), 6);
//	//vector<int>::iterator it = name.begin(); //相当于指针的作用
//	//for (int i = 0; i < name.size(); i++) {
//	//	cout << it[i] << endl;
//	//}
//	
//	//cout << name[0] << endl;
//	return 0;
//}
//#include<iostream>
//#include<set>        set的使用
//
//using namespace std;
//int main()
//{
//	set<int> name;
//	name.insert(6);
//	name.insert(2);
//	name.insert(3);
//	
//	for (set<int>::iterator it = name.begin(); it != name.end(); it++) {
//		cout << *it << endl;
//	}
//
//	set<int>::iterator it=name.find(2);
//	cout << *it << endl;
//
//	return 0;
//}
//#include<map>   // map
//#include<iostream>
//using namespace std;
//int main()
//{
//    char t;
//    map<char, int>maps;
//    maps['d'] = 10;
//    maps['e'] = 20;
//    maps['a'] = 30;
//    maps['b'] = 40;
//    maps['c'] = 50;
//    maps['r'] = 60;
//    cout << "你想删除的是:"; cin >> t;
//    cout << "删除前:" << endl;
//    for (map<char, int>::iterator it = maps.begin(); it != maps.end(); it++)
//    {
//        cout << it->first << " " << it->second << endl;
//    }
//
//    maps.erase(maps.find(t));
//
//    cout << "删除后:" << endl;
//    for (map<char, int>::iterator it = maps.begin(); it != maps.end(); it++)
//    {
//        cout << it->first << " " << it->second << endl;
//    }
//
//    //输出查找的值
//   /*map<char,int>::iterator its = maps.find('c');
//   cout << its->second;*/
//   //while (its != maps.end()) {
//      
//  // }
//  //cout << *its << endl;
//    return 0;
//}
//#include <map>
//#include <string>
//#include <iostream>
//using namespace std;
//int main()
//{
//	map<char, int> name;
//	name['a'] = 1001;
//	cout << "key是a的value的初始值是" << name['a'] << endl;
//	name['a'] = 2222;
//	cout << "覆盖新值是" << name['a'] << endl;
//	name['a'] = 3333;
//	cout << "覆盖新值是" << name['a'] << endl;
//	name['a'] = 4444;
//	cout << "覆盖新值是" << name['a'] << endl;
//	//cout << "size = " << name.size() << endl;
//	//1. 使用 key 删除
//	
//	//name.erase('a');  // 删除 key = 123456 的节点
//	//cout << "size = " << name.size() << endl;
//	////2. 使用迭代器删除
//	//map<char, int>::iterator iter = name.find('b');
//	//name.erase(iter);
//	//cout << "size = " << name.size() << endl;
//	////3. 清空整个容器
//	//name.clear();
//	//cout << "size = " << name.size() << endl;
//
//	//cout <<"长度是:"<< name.size() << endl;
//	//name.insert(pair<char, int>('t', 1222));
////	name.insert
////	cout << "key是a的value是" << name['a'] << endl;
//	//cout << "key是a的value是" << name['b'] << endl;
//	//cout << "key是a的value是" << name['t'] << endl;
//	////map<string, int>name1;
//	//name1["hhh"] = 1002;
//	//map<char, int>::iterator it = name.begin();
//	/*for (map<char, int>::iterator it = name.begin(); it != name.end(); it++) {
//		cout << it->first <<" "<< it->second << endl;
//	}*/
//	//cout << "key是a的value是" << name['a'] << endl;
////	cout << "key是hhh的value是" << name1["hhh"] << endl;
//
//	return 0;
//}
//#include <map>
//#include<iostream>
//using namespace std;
//int main()
//{
//	string name;
//	int telp=1;
//	map<string, int> xx;
//	while (telp != 0) {
//		cin >> name >> telp;
//		xx[name] = telp;
//	}
//	cout << "输出:" << endl;
//	for (map<string, int>::iterator it = xx.begin(); it != xx.end(); it++) {
//		cout << it->first << " " << it->second << endl;
//	}
//	return 0;
//}
//#include <iostream> // queue 就是队列 先进先出
//#include<queue>
//using namespace std;
//int main()
//{
//	queue<int> name;
//	name.push(2);
//	name.push(3);
//	name.push(4);
//	name.push(5);
////	queue<int>::iterator it = name.begin
//	//name.pop();
//	cout << "name.size:" << name.size() << endl;
//	cout << "font:" << name.front() << endl; //队首
//
//	while (name.empty() != true) //队尾
//	{
//		cout << name.front() << endl;
//		name.pop();
//	}
//	//name.front();
//	//cout << "font:"<<name.front() << endl;
//
//	return 0;
//}

//#include <iostream> // stack 就是栈  先进后出
//#include<stack>
//using namespace std;
//int main()
//{
//	stack<int> name;
//	name.push(1);
//	name.push(2);
//	name.push(3);
//	name.push(4);
//	while (name.empty() != true) {
//		cout << name.top() << endl;
//		name.pop();
//	}
//	
//	return 0;
//}

//使用stl来去创建一个通讯录
//#include<iostream>
//#include <vector>
//#include <map>
//using namespace std;
//int screen() //屏幕显示
//{
//	int chose;
//	cout << "\t\t\t通讯录操作\t\t\t";
//	cout << "1--输入信息" << endl;
//	cout << "2--删除信息" << endl;
//	cout << "3--查找信息" << endl;
//	cout << "4--修改信息" << endl;
//	cout << "5--查询总总人数" << endl;
//	cout << "操作为:"; cin >> chose;
//	return chose;
//}
//void input() {
//	string name;
//	int temp;
//	map<string, int> infor;
//	while (temp != 0) { //仅仅输入姓名和电话  更多又该这样处理？？
//		cin >> name>>temp;
//		infor[name] = temp;
//	}
//
//
//	//maps['r'] = 60;
//	//    for (map<char, int>::iterator it = maps.begin(); it != maps.end(); it++)
//	//    {
//	//        cout << it->first << " " << it->second << endl;
//	//    }
//	/*string name;
//	vector<string> name1;
//	cin >> name;
//	name1.push_back(name);
//	cout << "输出:" << name1[0] << endl;*/
//}
//void dele() {
//	string del;
//	cout << "删除联系人:"; cin >> del;
//	
//}
//int main()
//{
//	switch (screen()) {
//	case 1: input(); break;
//	case 2: dele(); break;
//	case 3:
//	case 4:
//	case 5:
//	}
//
//	
//
//	return 0;
//}
//
