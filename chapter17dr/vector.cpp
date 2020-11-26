#include "../std_lib_facilities.h"

ostream& print_vector(ostream& os, vector<int>& a)
{
	for (int vectorelem : a)
		os << vectorelem << endl;
	return os;
}

int main()
{

	int v1elems = 100;

	vector<int> vector1(10);

		for (int i = 0; i<10; ++i)
		{
			vector1[i] = v1elems;
			++v1elems;
		}

	cout << "vector1:\n";
	print_vector(cout, vector1);


	int v2elems = 100;

	vector<int> vector2(11);

		for (int i = 0; i<11; ++i)
		{
			vector2[i] = v2elems;
			++v2elems;
		}

	cout << "vector2:\n";
	print_vector(cout, vector2);

	int v3elems = 100;

	vector<int> vector3(20);

		for (int i = 0; i<20; ++i)
		{
			vector3[i] = v3elems;
			++v3elems;
		}

	cout << "vector3:\n";
	print_vector(cout, vector3);

	return 0;
}