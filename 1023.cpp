/*
    链接：https://ac.nowcoder.com/acm/contest/18839/1023
    来源：牛客网

    题目描述
    将一个四位数，反向输出。


    输入描述:
    一行，输入一个整数n（1000 <= n <= 9999）。
    输出描述:
    针对每组输入，反向输出对应四位数。
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    while (num!=0)
    {
        cout << num % 10;
        num /= 10;
    }
    cout << endl;
    system("pause");
    return 0;
}
