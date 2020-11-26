#include "../std_lib_facilities.h"

struct Point{
	int x;
	int y;
};

bool operator!= (const Point& p1, const Point& p2){
	if (p1.x == p2.x && p1.y == p2.y)
		return false;

	return true;
}

void skip_to_int()
{
	if(cin.fail())
		{
			cin.clear();
			for(char ch; cin >> ch;)
			{
				if (isdigit(ch) || ch == '-')
				{
					cin.unget();
					return;
				}
			}	
		}
	error ("no input");	
}

int get_int(){
	int n = 0;
	while (true)
	{
		if (cin >> n) return n;

		skip_to_int();
	}
}


int main()
try{
	cout << "Please enter seven point's x and y coordinates (separated by spaces and/or enters):\n" ;
	
	vector<Point> original_points;
	int xcoord;
	int ycoord;

	while (original_points.size() < 7){
		if(!cin) error("bad input");
		xcoord = get_int();
		ycoord = get_int();
		original_points.push_back(Point{xcoord, ycoord});
	}

	for (const auto& p : original_points)
		cout << '(' << p.x << ',' << p.y << ")\n";

	ofstream point_out {"mydata.txt"};
	if (!point_out) error("can't output to file");

	for (const auto& p : original_points)
		point_out << p.x << ' ' << p.y << "\n";

	point_out.close();

	ifstream point_in {"mydata.txt"};
	vector<Point> processed_points;

	while (point_in >> xcoord >> ycoord){
		processed_points.push_back(Point{xcoord, ycoord});
	}

	cout << "Processed:\n";
	for (const auto& p : processed_points)
	cout << '(' << p.x << ',' << p.y << ")\n";

	if (original_points.size() != processed_points.size())
		cout << "Not equal size\n";

	for (int i = 0; i < original_points.size(); i++)
	{
		if (processed_points[i] != original_points[i])
			cout << "Not equal data\n";
	}

	return 0;
} catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}