//#include <algorithm>
//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//void show(int *arr, int size) {
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int arr[] = { 1, 3, 4, 2,6, 53 ,5 ,3, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	vector<int> vect(arr, arr + size);
//	sort(vect.begin(), vect.end());
//
//
//
//	//cout<<"距离最大距离:"<<distance(vect.begin(), max_element(vect.begin(), vect.end()));
//	//计算迭代器的距离位置
//
//	/*for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
//		cout << *it << " ";
//	cout << endl;*/
//
//	//vect.erase(vect.begin() + 2);  //删除vector数组的某一位置
//	 
//	//vect.erase(unique(vect.begin(), vect.end()), vect.end());
//	//for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
//	//	cout << *it << " "; //删除vector数组的所有重复元素
//
//	/*auto q = lower_bound(vect.begin(), vect.end(), 20);
//	cout << q - vect.begin() << endl;*/  //没有理解啥意思
//
//
//
//	/*cout<<"出现3的次数:"<<count(vect.begin(), vect.end(),3)<<endl;
//	cout<<"2出现的次数:"<<count(arr, arr + size, 2)<<endl;*/
//
//	//find(vect.begin(), vect.end(), 5) != vect.end() ? cout << "找到了" : cout << "没有";
//	/*cout << "最大数值是:" << *max_element(arr, arr + size) << endl;
//	cout << "最小数值是:" << *min_element(arr, arr + size) << endl;*/
//
//	/*set<int> se(arr, arr + size);
//	for (set<int>::iterator it = se.begin(); it != se.end(); it++)
//		cout << *it << " ";*/
//
//	/*vector<int> vect(arr, arr + size);
//	sort(vect.begin(), vect.end());
//	for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
//		cout << *it << " ";*/
//	//sort(arr, arr+size); //正向排序
//	//show(arr, size); //升序排列好了
//	////if (binary_search(arr, arr + size, 2)) {
//	////	cout << "存在";//binary_search(arr, arr + size, 2)函数查找
//	////}
//	////else
//	////	cout << "不存在";
//	//reverse(arr, arr + size); //反向排序
//	//show(arr, size);
//	
//	return 0;
//}

//#include <algorithm>
//#include <vector>
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[] = { 1, 3, 4, 2,6, 53 ,5 ,3, 6 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	int arr2[10];
//	copy_n(arr, size, arr2);
//	for (int i = 0; i < 10; i++)
//		cout << arr2[i] << " ";
//	//vector<int>vec(arr, arr + size);
//	////[](int x)  是拉达姆表达式
//	//all_of(arr, arr + size, [](int x) {return x > 0; }) ?
//	//	cout << "All are positive element" : cout << "All are not positive element";
//	return 0;
//}
