//Currency.cpp - converts American dollars to different currencies
//Created/Revised by Chase Franse on 3/25/19

#include <iostream>
using namespace std;

int main()
{
	double rates[5] = {0.92, 1.81, 0.98, 0.67, 2.01};
	int choice = 0;
	int dollars = 0;
	double result = 0.0;
	
	cout << "Currency Menu" << endl;
	cout << "1     Euro" << endl;
	cout << "2     British Pound" << endl;
	cout << "3     German Mark" << endl;
	cout << "4     Swiss Franc" << endl;
	cout << "5     Belize Dollars" << endl << endl;
	cout << "Choice (1 to 5): ";
	cin >> choice;
	
	if (choice > 0 && choice < 6)
	{
		cout << "Number of American Dollars: $";
		cin >> dollars;
		cout << endl;
		
		if (choice == 1)
			cout << "Euros: ";
		else if (choice == 2)
			cout << "British Pounds: ";
		else if (choice == 3)
			cout << "German Marks: ";
		else if (choice == 4)
			cout << "Swiss Francs: ";
		else
			cout << "Belize Dollars: ";
			
		result = dollars * rates[choice - 1];
		cout << result << endl;		
	}
	else
		cout << "Invalid Menu Choice";
		
	return 0;	
}
