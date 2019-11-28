//Chapter 10 - Question 14
//Created/Revised by Chase Franse on 3/17/19

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function prototypes
void displayChoices();
void getArea(double rad, double &area);
void getDiameter(double rad, double &diameter);
void getCircumference(double rad, double &circumference);

int main()
{
	int choice = 0;
	double radius = 0.0;
	double circleArea = 0.0;
	double circleDiameter = 0.0;
	double circleCircumference = 0.0;
	
	displayChoices();
	cout << "Enter your choice (1, 2 or 3): ";
	cin >> choice;
	
	if (choice < 1 || choice > 3)
		cout << "Invalid Choice" << endl;
	else
	{
		cout << "Radius: ";
		cin >> radius;
		
		if (choice == 1) {
			getArea(radius, circleArea);
			cout << "Area: " << circleArea << endl;
			cout << "Rounded: " << fixed << setprecision(2) << circleArea;
		} else if (choice == 2) {
			getDiameter(radius, circleDiameter);
			cout << "Diameter: " << circleDiameter << endl;
			cout << "Rounded: " << fixed << setprecision(2) << circleDiameter;
		} else {
			getCircumference(radius, circleCircumference);
			cout << "Circumference: " << circleCircumference << endl;
			cout << "Rounded: " << fixed << setprecision(2) << circleCircumference;
		}
		
		cout << endl;
	}
	
	return 0;
}

/******FUNCTION DEFINITIONS******/

void displayChoices()
{
	cout << "1    Circle Area" << endl;
	cout << "2    Circle Diameter" << endl;
	cout << "3    Circle Circumference" << endl;
}

void getArea(double rad, double &area)
{
	const double PI = 3.141593;
	area = PI * pow(rad, 2);
}

void getDiameter(double rad, double &diameter)
{
	diameter = 2 * rad;
}

void getCircumference(double rad, double &circumference)
{
	const double PI = 3.141593;
	circumference = 2 * PI * rad;
}
