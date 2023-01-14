#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    int result = a + b;

    int hex[100]{};
    int n = 0; // 十六进制结果位数（相当于栈顶指针）
    // 模拟短除法
    for (n = 0; result > 15; n++)
    {
        int temp = result / 16;
        hex[n] = result - 16 * temp;
        result = temp;
    }
    hex[n] = result;
    // 输出结果（相当于出栈）
    for (int i = n; i >= 0; i--)
    {
        if (hex[i] >= 10)
        {
            switch (hex[i])
            {
            case 10:
                cout << "a";
                break;
            case 11:
                cout << "b";
                break;
            case 12:
                cout << "c";
                break;
            case 13:
                cout << "d";
                break;
            case 14:
                cout << "e";
                break;
            case 15:
                cout << "f";
                break;
            }
            continue;
        }
        cout << hex[i];
    }

    return 0;
}