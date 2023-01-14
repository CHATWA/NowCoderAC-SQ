#include <iostream>

using namespace std;

int main()
{
    double up, down, heigh;
    cin >> up >> down >> heigh;
    cout.precision(3);
    cout << fixed << (up + down) * heigh / 2 << endl;
    system("pause");
    return 0;
}
