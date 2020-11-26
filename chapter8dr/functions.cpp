#include <iostream>

void swap_v(int a, int b)	//pass by value
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	std::cout << a << ' ' << b << '\n';
}

void swap_r(int& a, int& b)	//pass by reference
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	std::cout << a << ' ' << b << '\n';
}

/*	void swap_cr(const int& a, const int b)
{	int temp;
	temp = a;
	a = b;
	b = temp;

	std::cout << a << ' ' << b << '\n';
}*/

int main()
{
	int x = 7;
	int y = 9;
	swap_v(x, y);
	swap_v(7, 9);

	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy);
	swap_v(7.7, 9.9);	//the functions operate with ints

	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy);
	//swap_r(dx, dy);
	
	return 0;
}
