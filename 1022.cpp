/*
    链接：https://ac.nowcoder.com/acm/contest/18839/1022
    来源：牛客网

    题目描述
    输入一个整数，求其十位数


    输入描述:
    输入一个整数，在int范围内
    输出描述:
    输出一个整数
*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    cout << num / 10 % 10 << endl;
    system("pause");
    return 0;
}
