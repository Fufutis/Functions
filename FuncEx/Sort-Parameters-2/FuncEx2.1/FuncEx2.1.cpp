#include<iostream>
using namespace std;
void ascsort(int num1, int num2, int num3);
int main() {
	int a, b, c;
	cout << "Give three numbers: ";
	cin >> a >> b >> c;
	ascsort(a, b, c);
}
void ascsort(int num1, int num2, int num3) {
	int temp;
	if (num1 >= num2 ) {									//by swapping their values once we already know that a is bigger than b thus it leaves us with only 2 options
		temp = num2;										
		num2 = num1;
		num1 = temp;
	}
	if (num1 >= num3) {
		temp = num3;
		num3 = num1;
		num1 = temp;
	}
	if (num2 >= num3) {
		temp = num3;
		num3 = num2;
		num2 = temp;
	}
	cout << "Sorted: " << num1 << " " << num2 << " " << num3 << endl;
}