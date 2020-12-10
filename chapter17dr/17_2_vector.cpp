#include "../std_lib_facilities.h"

void print_vector(ostream& os, vector<int>& v)
{
	for (int el : v)
		os << el << endl;
}

int main()
{
	int incnum = 1;

	vector<int> p1(10);

	for (auto& el : p1)
		{
			el = incnum;
			incnum *= 2;
		}

	print_vector(cout, p1);


	vector<int> p2 = p1;

	print_vector(cout, p2);

	return 0;
}