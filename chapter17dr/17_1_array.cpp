#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << "elem[" << i << "] == " << a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << "elem[" << i << "] == " << a[i] << endl;
}

int main()
{
	int* arr10_1 = new int[10];

	for(int i = 0; i < 10; ++i)
		cout << "arr1[" << i << "] == " << arr10_1[i] << endl;

	delete[] arr10_1;


	int* arr10_2 = new int[10];

	int incrnum = 100;
	for(int i = 0; i < 10; ++i)
	{
		arr10_2[i] = incrnum;
		++incrnum;
	}


	int* arr11 = new int[11];

	incrnum = 100;
	for(int i = 0; i < 11; ++i)
	{
		arr11[i] = incrnum;
		++incrnum;
	}


	int* arr20 = new int[20];

	incrnum = 100;
	for(int i = 0; i < 20; ++i)
	{
		arr20[i] = incrnum;
		++incrnum;
	}

	print_array10(cout, arr10_2);
	print_array(cout, arr11, 11);
	print_array(cout, arr20, 20);

	delete[] arr10_2;
	delete[] arr11;
	delete[] arr20;

	return 0;
}