#include<iostream>
#include<cmath>
using namespace std;
const int numbers = 3;

double minimum(double x, double y, double z);
double maximum(double x, double y, double z);
double geomave(double x, double y, double z);
double sum(double x, double y, double z);
void display(double x, double y, double z);


int main() {
	double num[numbers], min, max, geo, summ;
	char choice;
	cout << "Enter 3 real number: ";
	for (int i = 0; i < numbers; i++) {
		do {
			cin >> num[i];
		} while (num[i] <= 0);
	}
	min = minimum(num[0], num[1], num[2]);
	max = maximum(num[0], num[1], num[2]);
	geo = geomave(num[0], num[1], num[2]);
	summ = sum(num[0], num[1], num[2]);
	do {
		cout << "\na) Minimum" << endl;
		cout << "b) Maximum" << endl;
		cout << "c) Geometric Average" << endl;
		cout << "d) Sum" << endl;
		cout << "e) Display Numbers" << endl;
		cout << "Any other to quit" << endl;
		cout << "Choice : ";


		cin >> choice;
		switch (choice) {
		case 'a':
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

	} while (choice == 'a' || choice == 'b' || choice == 'c' || choice == 'd' || choice == 'e');
}

double minimum(double x, double y, double z) {
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
double maximum(double x, double y, double z) {
	if (x >= y && x >= z) {
		return x;
	}
	else if (y >= x && y >= z) {
		return y;
	}
	else
		return z;
}
double geomave(double x, double y, double z) {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
double sum(double x, double y, double z) {
	return x + y + z;
}
void display(double x, double y, double z) {
	cout << "\n" << x << " " << y << " " << z << endl;
}