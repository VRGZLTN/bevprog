#include "../std_lib_facilities.h"

vector<int> gv = {1, 2, 4 ,8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
	vector<int> lv(v.size());
	lv = v;

	for(auto& el : lv)
		cout << el << endl;

	vector<int> lv2 = v;

	for(auto& el : lv)
		cout << el << endl;
}

int factorial(int n)
{
	int fact = 1;

	for(int i = 1; i <= n; ++i)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	f(gv);


	vector<int> vv;

	for(int i = 0; i < 10; ++i)
		vv.push_back(factorial(i));

	f(vv);

	return 0;
}