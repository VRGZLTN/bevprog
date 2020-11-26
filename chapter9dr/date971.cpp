#include "../std_lib_facilities.h"

enum Month{
		jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

class Date {
public:

	class Invalid {};
	Date(int yy, Month mm, int dd);
	void add_day(int n);

	Month get_month() { return m; }
	int get_day() { return d; }
	int get_year() { return y; }

private:
	int y;
	Month m;
	int d;
	bool check();
};


Date::Date(int yy, Month mm, int dd)
	:y(yy), m(mm), d(dd)
{
	if (!check())
		throw Invalid();
}

bool Date::check()
{
	if (y < 0 || d < 1 || d > 31)
		return false;
	else
		return true;
}

void Date::add_day(int n)
{
	d += n;

	while (d > 31)
	{
		d-= 31;
		++ m;
		if (m == jan)
		{
			y ++;
		}
	}
}

ostream& operator<<(ostream& os, Date& d)
{
	return os << '(' << d.get_year()
			<< ',' << d.get_month()
			<< ',' << d.get_day() << ')';
}

int main()
try {

	Date today(1978, Month::jun, 25);

	Date tomorrow = today;
	tomorrow.add_day(365);

	cout << today << '\n' << tomorrow <<'\n';

	//Date test_invalid(2004, Month::asd, -5);
	
	return 0;
} catch (Date::Invalid) {
	cerr << "Invalid date\n";
	return 1;
} catch (exception& e) {
	cerr << e.what() << '\n';
	return 2;
}