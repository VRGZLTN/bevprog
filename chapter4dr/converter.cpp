#include "../std_lib_facilities.h"

bool acceptedmeas(string unit)
	{
		if ((unit != "cm") && (unit != "m") && (unit != "in") && (unit != "ft"))
		{
			cout << "Not an accepted measurement (try cm, m, in or ft)." << endl;
			return false;
		}
		else
			return true; 
	}

double converter(double num, string unit)
	{
		constexpr double cm_to_m = 0.01;
		constexpr double in_to_m = 0.0254;
		constexpr double ft_to_m = 0.3048;

		if (unit == "cm")
			return num * cm_to_m;

		if (unit == "in")
			return num * in_to_m;

		if (unit == "ft")
			return num * ft_to_m;

		return num;
	}

int main()
{
	double num = 0, smallest = 0, largest = 0, sum_in_meters = 0, num_in_meters = 0;
	string unit = "";
	vector<double> numbers;
	
	cout << "Please enter a number and a measurement (accepted: cm, m, in, ft): " << endl;

	while (cin >> num >> unit)
	{
		if(acceptedmeas(unit))
		{
			cout << "The value you entered is: "  << num << ' ' << unit << endl;

			num_in_meters = converter(num, unit);

			if (smallest == 0 && largest == 0)
			{
				smallest = num_in_meters;
				largest = num_in_meters;
			}

			if (num_in_meters > largest)
			{
				largest = num_in_meters;
				cout << "The largest so far." << endl;
			}
			
			if (num_in_meters < smallest)
			{
				smallest = num_in_meters;
				cout << "The smallest so far." << endl;
			}

			sum_in_meters += num_in_meters;

			numbers.push_back(num_in_meters);
		}
	}

	cout << "You have entered " << numbers.size() << " values." << endl;
	cout << "The sum of these are " << sum_in_meters << " meters." << endl;
	cout <<	"The largest of these was " << largest << " meters, the smallest was " << smallest << " meters." << endl;
	cout << "The values in increasing order (in meters): " << endl;

	sort(numbers);
	
	for (double number : numbers)
		cout << number << " m" << endl;
}