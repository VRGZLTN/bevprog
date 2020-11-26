#include "../std_lib_facilities.h"

struct Date {
	int y, m, d;
	Date(int yy, int mm, int dd);
	void add_day(int n);
};

Date::Date(int yy, int mm, int dd)
{
	y = yy;

	if (mm < 1 || mm > 12)
		error("invalid month");
	else
		m = mm;

	if (dd < 1 || dd > 31)
		error("invalid day");
	else
		d = dd;
}

void Date::add_day(int n)
{
	d += n;

	if (d > 31)
	{
		d-= 31;
		m ++;
		if (m > 12)
		{
			m -= 12;
			y ++;
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

	Date today(1978, 6, 25);

	Date tomorrow = today;
	tomorrow.add_day(1);

	cout << today << '\n' << tomorrow << '\n';

	Date test_invalid(2004, 13, -5);

	return 0;
} catch (exception& e) {
	cerr << e.what() << '\n';
	return 1;
}