#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << endl;

	return os;
}

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << endl;

	return os;
}

int main()
{
	int* array1 = new int[10];

	for (int i = 0; i < 10; ++i)
		cout << array1[i] << endl;

	delete[] array1;

	int arr2elems = 100;

	int* array2 = new int[10];
		for (int i = 0; i<10; ++i)
		{
			array2[i] = arr2elems;
			++arr2elems;
		}
	cout << "array2:\n";
	print_array10(cout, array2);

	delete array2;

	int arr3elems = 100;
	int* array3 = new int[11];
		for (int i = 0; i<11; ++i)
		{
			array3[i] = arr3elems;
			++arr3elems;
		}
	cout << "array3:\n";
	print_array(cout, array3, 11);

	delete array3;

	int arr4elems = 100;
	int* array4 = new int[11];
		for (int i = 0; i<20; ++i)
		{
			array4[i] = arr4elems;
			++arr4elems;
		}
	cout << "array4:\n";
	print_array(cout, array4, 20);

	delete array4;


	return 0;
}