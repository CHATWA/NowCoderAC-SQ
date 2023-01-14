/*
    链接：https://ac.nowcoder.com/acm/contest/18839/1024
    来源：牛客网

    题目描述
    依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
    输入描述:
    一行，3科成绩，成绩之间用一个空格隔开。
    输出描述:
    一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开。
*/

#include <iostream>

using namespace std;

int main()
{
    double a, b, c, sum, ave;
    cin >> a >> b >> c;
    sum = a + b + c;
    ave = sum / 3;
    cout.precision(2);
    cout << fixed << sum << " " << ave << endl;
    system("pause");
    return 0;
}
