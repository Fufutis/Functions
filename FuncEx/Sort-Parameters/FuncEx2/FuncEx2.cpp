#include<iostream>
using namespace std;
void ascsort(int num1, int num2, int num3);
int main() {
	int a, b, c;
	cout << "Give three numbers: ";
	cin >> a >> b >> c;
	ascsort(a,b,c);
}
void ascsort(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3) {
		if (num2 >= num3) {
			cout << num3 << " " << num2 << " " << num1;
		}
		else {
			cout << num2 << " " << num3 << " " << num1;
		}
	}
	else if (num2 >= num1 && num2 >= num3) {
		if (num1 >= num3) {
			cout << num3 << " " << num1 << " " << num2;
		}
		else {
			cout << num1 << " " << num3 << " " << num2;
		}
	}
	else if (num3 >= num1 && num3 >= num2) {
		if (num2 >= num1) {
			cout << num1 << " " << num2 << " " << num3;
		}
		else {
			cout << num2 << " " << num1 << " " << num3;
		}
	}
}																	