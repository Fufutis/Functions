#include<iostream>
#include<cmath>																	//we will use sqrt() and pow()
using namespace std;

double minimum(double x, double y, double z);									//declaring the functions before the main
double maximum(double x, double y, double z);
double geomave(double x, double y, double z);
double sum(double x, double y, double z);
void display(double x, double y, double z);

int main() {
	double num[3], min, max, geo, summ;											//declaring extra variables for personal easy(could be easily replaced)
	char choice;																//choice is for the switch

	cout << "Enter 3 real number: ";
	for (int i = 0; i < 3; i++) {												//for is for the 3 numbers as requested
		do {																	//do while is for the numbers to be positive
			cin >> num[i];
		} while (num[i] <= 0);
	}

	min = minimum(num[0], num[1], num[2]);
	max = maximum(num[0], num[1], num[2]);
	geo = geomave(num[0], num[1], num[2]);
	summ = sum(num[0], num[1], num[2]);

	do {																		//after getting an answer the program will ask again
		cout << "\na) Minimum" << endl;																				
		cout << "b) Maximum" << endl;
		cout << "c) Geometric Average" << endl;
		cout << "d) Sum" << endl;
		cout << "e) Display Numbers" << endl;
		cout << "Any other to quit" << endl;									//"any other to quit" will stop the dowhile loop
		cout << "Choice : ";

		cin >> choice;

		switch (choice) {														//the meaning of a-e is found on the previous set if cout's
		case 'a':																//they are in order 
			cout << "\nThe minimum is " << min << endl;
			break;
		case 'b':
			cout << "\nThe maximum is " << max << endl;
			break;
		case 'c':
			cout << "\nThe geometric average is " << geo << endl;
			break;
		case 'd':
			cout << "\nThe sum is " << summ << endl;
			break;
		case 'e':
			display(num[0], num[1], num[2]);
			break;

		default:
			cout << "\n\nProgram stopped\n\n";
			break;
		}
																				//the do while that loops until u pick "any other to quit" option is below
	} while (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd' || choice == 'e');
}

double minimum(double x, double y, double z) {									//the minimum of 3 numbers		
	if (x <= y && x <= z) {
		return x;
	}
	else if (y <= x && y <= z) {
		return y;
	}
	else {
		return z;
	}
}
double maximum(double x, double y, double z) {									//the maximum of 3 numbers
	if (x >= y && x >= z) {
		return x;
	}
	else if (y >= x && y >= z) {
		return y;
	}
	else
		return z;
}
double geomave(double x, double y, double z) {									//the geometric average of the 3 numbers(square root of(a^2+b^2+c^2))
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
double sum(double x, double y, double z) {										//the sum of 3 numbers
	return x + y + z;
}
void display(double x, double y, double z) {									//just displays the 3 numbers
	cout << "\n" << x << " " << y << " " << z << endl;
}