#include "../std_lib_facilities.h"

void print_vector(ostream& os, vector<int>& v)
{
	for (int el : v)
		os << el << endl;
}

int main()
{
	int incrnum = 100;

	vector<int> vec10(10);
	for(auto& el : vec10)
	{
		el = incrnum;
		++incrnum;
	}


	incrnum = 100;
	vector<int> vec11(11);
	for(auto& el : vec11)
	{
		el = incrnum;
		++incrnum;
	}


	incrnum = 100;
	vector<int> vec20(20);
	for(auto& el : vec20)
	{
		el = incrnum;
		++incrnum;
	}

	print_vector(cout, vec10);
	print_vector(cout, vec11);
	print_vector(cout, vec20);

	return 0;
}