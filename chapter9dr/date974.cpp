#include "../std_lib_facilities.h"

namespace vzchrono {
const vector<string> months =
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
};

enum class Month{
		jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months [int(m)];
} 

class Date {
public:

	class Invalid {};

	Date(): y(1970), m(Month::jan), d(1) {}
	Date(int yy, Month mm, int dd);
	void add_day(int n);

	Month get_month() const { return m; }
	int get_day() const { return d; }
	int get_year() const { return y; }

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
		if (m == Month::jan)
		{
			y ++;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << '(' << d.get_year()
			<< ',' << d.get_month()
			<< ',' << d.get_day() << ')';
}

} // end of namespace chrono


using namespace vzchrono;

int main()
try {

	Date today(1978, Month::jun, 25);

	Date tomorrow = today;
	tomorrow.add_day(1);
	cout << today << '\n' << tomorrow <<'\n';

	//Date testdate;
	//cout << testdate << '\n';

	//Date test_invalid(-100, Month::asd, -5);
	return 0;
	
} catch (Date::Invalid) {
	cerr << "Invalid date\n";
	return 1;
} catch (exception& e) {
	cerr << e.what() << '\n';
	return 2;
}