#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, area;
    cin >> a >> b >> c;
    area = (a + b + c) / 2;
    area = sqrt(area * (area - a) * (area - b) * (area - c));
    cout.precision(2);
    cout << fixed << "circumference=" << a + b + c << " area=" << area << endl;
    system("pause");
    return 0;
}
