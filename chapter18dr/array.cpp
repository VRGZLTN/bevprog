#include "../std_lib_facilities.h"

int ga[10] = {1, 2, 4 ,8, 16, 32, 64, 128, 256, 512};	//defining global array

void f(int arr[], int numofel)
{
	int la[10];

	for(int i = 0; i < numofel; ++i)	//copying argument array's elements into local array
		la[i] = arr[i];

	for(int i = 0; i < numofel; ++i)
		cout << "la[" << i << "] == " << la[i] << endl;	//printing local array


	int* p = new int[numofel];

	for(int i = 0; i < numofel; ++i)	//coping arg. array's elements into the free-store array
		p[i] = arr[i];

	for(int i = 0; i < numofel; ++i)
		cout << "p[" << i << "] == " << p[i] << endl;	//printing free-store array

	delete[] p;
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


int main(){

	f(ga, 10);

	int aa[10];
	for(int i = 0; i < 10; ++i)
	{
		aa[i] = factorial(i);
	}
	

	f(aa, 10);


	return 0;
}