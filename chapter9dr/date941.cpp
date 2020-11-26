#include "../std_lib_facilities.h"

struct Date {
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if (m < 1 || m > 12)
		error("invalid month");

	if (d < 1 || d > 31)
		error("invalid day");

	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date& dd, int n)
{
	dd.d += n;

	if (dd.d > 31)
	{
		dd.d -= 31;
		dd.m ++;
		if (dd.m > 12)
		{
			dd.m -= 12;
			dd.y ++;
		}
	}
}

ostream& operator<<(ostream& os, Date& d)
{
	return os << '(' << d.y
			<< ',' << d.m
			<< ',' << d.d << ')';
}

int main()
try {

	Date today;
	init_day(today, 1978, 6, 25);

	Date tomorrow = today;
	add_day(tomorrow, 1);

	cout << today << '\n' << tomorrow << '\n';

	Date test_invalid;
	init_day(test_invalid, 2004, 13, -5);

	return 0;
} catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}