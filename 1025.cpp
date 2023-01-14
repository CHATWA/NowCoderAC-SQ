#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout.precision(1);
    cout << fixed << (a + b + c + d + e) / 5 << endl;
    system("pause");
    return 0;
}
