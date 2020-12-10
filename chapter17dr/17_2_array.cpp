#include "../std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << "elem[" << i << "] == " << a[i] << endl;
}

int main()
{
	int n = 7;
	int* p1 = &n;

	cout << "p1 points to: " << p1 << ", the pointed value is: " << *p1 << endl;


	int* p2 = new int[7];

	int incrnum = 1;
	for (int i = 0; i < 7; ++i) {
		p2[i] = incrnum;
		incrnum *= 2;
	}

	cout << "p2 points to: " << p2 << '\n';

	print_array(cout, p2, 7);


	int* p3 = p2;
	p2 = p1;
	p2 = p3;


	cout << "p1 points to: " << p1 << ", the pointed value is: " << *p1 << endl;
	cout << "p2 points to: " << p2 << ", the pointed value is: " << *p2 << endl;

	delete[] p2;


	p1 = new int[10];

	incrnum = 1;
	for (int i = 0; i < 10; ++i) {
		p1[i] = incrnum;
		incrnum *= 2;
	}


	p2 = new int[10];

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	print_array(cout, p1, 10);
	print_array(cout, p2, 10);

	delete[] p1;
	delete[] p2;

	return 0;
}