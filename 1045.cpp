// // NOIP2002

#include <iostream>
#include <math.h>

using namespace std;

#define g 10.0

int main()
{
    double H, S1, V, L, K, n;
    int ballNum = 0;
    cin >> H >> S1 >> V >> L >> K >> n;
    // 下落时间
    // 最短时间
    double t1 = sqrt(2.0 * (H - K) / g);
    // 最长时间
    double t2 = sqrt(2.0 * H / g);

    // 上述时间节点小车位置
    // 最短时间的车尾
    double s1 = S1 + L - V * t1;
    // 最长时间的车头
    double s2 = S1 - V * t2;

    // 误差判断
    // s2-0.0001->[  最长时间  ]-----------[  最短时间  ]<-s1+0.0001
    s1 += 0.00001;
    s2 -= 0.00001;

    // 枚举每个小球位置，位置于s1与s2之间者落入小车
    for (int i = n - 1; i >= 0; i--)
        if (i >= s2 && i <= s1) // 注意s1 s2都是离原点的距离！！！
            ballNum++;
    cout << ballNum << endl;
    system("pause");
    return 0;
}
