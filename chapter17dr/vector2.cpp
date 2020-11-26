#include "../std_lib_facilities.h"

int main()
{
	vector<int> p1(10);

	int x = 1;
	for (int i = 0; i < 10; ++i)
	{
		p1[i] = x;
		x *= 2;
	}
	vector<int> p2(10);

	p2 = p1;

	for (int e : p2)
		cout << e << endl;

	return 0;
}