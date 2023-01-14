/*
	链接：https://ac.nowcoder.com/acm/contest/18839/1002
	来源：牛客网

	题目描述
	7254是一个不寻常的数，因为它可以表示为7254 = 39 x 186，这个式子中1~9每个数字正好出现一次
	输出所有这样的不同的式子（乘数交换被认为是相同的式子）
	结果小的先输出；结果相同的，较小的乘数较小的先输出。

	输入描述 :
	每一行输出一个式子，式子中的等号前后空格、乘号（用字母x代表）前后空格
	较小的乘数写在前面
*/

#include <iostream>
#include <algorithm>
using namespace std;

struct res
{
	int res;
	int r;
	int l;
};

bool check(int num, res out[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (num == out[i].r)
			return false;
	}
	return true;
}

int main()
{
	res out[100]{};
	int i = 0;
	int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int result, l, r;
	while (next_permutation(a, a + 9))
	{
		result = 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
		l = a[4];
		r = 1000 * a[5] + 100 * a[6] + 10 * a[7] + a[8];
		if (result == l * r && check(l, out, i))
		{
			out[i].res = result;
			out[i].l = l;
			out[i++].r = r;
		}
		l = 10 * a[4] + a[5];
		r = 100 * a[6] + 10 * a[7] + a[8];
		if (result == l * r && check(l, out, i))
		{
			out[i].res = result;
			out[i].l = l;
			out[i++].r = r;
		}
		l = 100 * a[4] + 10 * a[5] + a[6];
		r = 10 * a[7] + a[8];
		if (result == l * r && check(l, out, i))
		{
			out[i].res = result;
			out[i].l = l;
			out[i++].r = r;
		}
		l = 1000 * a[4] + 100 * a[5] + 10 * a[6] + a[7];
		r = a[8];
		if (result == l * r && check(l, out, i))
		{
			out[i].res = result;
			out[i].l = l;
			out[i++].r = r;
		}
	}
	for (int j = 0; j < i; j++)
	{
		cout << out[j].res << " = ";
		if (out[j].l < out[j].r)
		{
			cout << out[j].l << " x ";
			cout << out[j].r << endl;
		}
		else
		{
			cout << out[j].r << " x ";
			cout << out[j].l << endl;
		}
	}
	return 0;
}