#include <iostream>
using namespace std;
int  max(int x, int y);
int main() {

	int a, b,c;
	cin >> a>>b>>c;
	cout << max(max(a, b), c) << "";
	return 0;
}
int  max(int x, int y) {
	int m;
	m = x > y ? x : y;
	return m;
}
