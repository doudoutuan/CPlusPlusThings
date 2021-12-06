#include<iostream>
using namespace std;
double power(double x, int n);

int main(int argc, char const* argv[])
{
    double x;
    int n;
    cout << "请输入x值：" << endl;
    cin >> x;
    cout << "请输入n值：";
    cin >> n;
    cout << "x的n次方为：" << power(x, n) << endl;
    system("pause");
    return 0;
}
double power(double x, int n)
{
    double val = 1.0;
    while (n--)
    {
        val *= x;
    }
    return val;
}
