void reset(int& m) {
    m = 1000; //这个添加地址其实也和那哥绑定是一样的
}
void reset2(int* m) {
    *m = 100;//这个是采用指针来进行数值绑定
}
int main()
{
    int n = 0, i = 42;
    int& r = n; //采用数值之间的绑定
    r = 46;
    reset(r);
    cout << "n采用数据绑定的值是" << n << endl;

    int* p;
    p = &i;
    reset2(p);//采用指针传入地址
    cout << "p的采用指针传入值是" << n << endl;
}
//上边是关键的部分
