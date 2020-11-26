#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;

	return os;
}

int main()
{
	int n = 7;
	int* p1 = &n;

	cout << p1 << ' ' << n << endl;

	int* p2 = new int[7];

	int n2 = 1;
	for(int i = 0; i < 7; ++i)
	{
		p2[i] = n2;
		n2 *= 2;
	}

	cout << "P2: " << p2 << endl;

	print_array(cout, p2, 7);

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << p1 << ' ' << p2 << endl;

	delete p2, p1, p3;


	p1 = new int[10];

	int n3 = 1;
		for(int i = 0; i < 10; ++i)
	{
		p1[i] = n3;
		n3 *= 2;
	}

	p2 = new int[10];

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	print_array(cout, p2, 10);

	delete[] p1;
	delete[] p2;

	return 0;
}