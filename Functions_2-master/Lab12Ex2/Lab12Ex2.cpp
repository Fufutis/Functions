#include<iostream>
using namespace std;
const double pi = 3.14159;											

double circle(double radius);										//declaring functions before the main
double sphere(double radius);
double cylinder(double radius, double height);

int main() {
	double rad, height;
	char choice;
	do {
		cout << "a) Area of a circle" << endl;
		cout << "b) Area of a sphere" << endl;
		cout << "c) Area of a cylinder" << endl;
		cout << "Any other to quit\n\n";
		cout << "Choice : ";
		cin >> choice;

		cout << "\nEnter radius : ";								//a,b and c make use of rad var so we put it outside of the if's
		cin >> rad;													//to not rewrite it another 3 times

		if (choice == 'a') {
			cout << "The area of a circle is " << circle(rad);
		}
		else if (choice == 'b') {
			cout << "The area of a sphere is " << sphere(rad);
		}
		else if (choice == 'c') {									//only option c makes use of height var
			cout << "Enter height : ";
			cin >> height;
			cout << "The area of a sphere is " << cylinder(rad, rad);
		}
		else {
			cout << "\n\nProgram stopped\n\n";
		}
		cout << "\n\n";
	} while (choice == 'a' || choice == 'b' || choice == 'c');
}
double circle(double radius) {										//will return the area of a circle
	double area;
	area = pi * radius * radius;
	return area;
}
double sphere(double radius) {										//will return the area of sphere
	double area;
	area = 4 * pi * radius * radius;
	return area;
}
double cylinder(double radius, double height) {						//will return the area of a cylinder
	double area;
	area = 2 * pi * radius * (radius + height);
	return area;
}