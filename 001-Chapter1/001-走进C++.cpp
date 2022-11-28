#define Pi 3.14
int main(void)
{
	float x, y;
	cout << "please input a number:";
	cin >> x >> y;
	cout << "周长是：" << 2 * Pi * x << "\n";
	cout << "面积是：" << Pi * pow(x, 2) << "\n";
}
