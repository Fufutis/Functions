#include<iostream>
using namespace std;
void devider(int start, int end);						//void because we want to cout and it doesnt have to hold any value
int main() {
	int start, end;										
	cout << "Enter the starting range: ";
	cin >> start;
	cout << "Enter the ending range: ";
	cin >> end;
	devider(start, end);
}
void devider(int start, int end) {
	cout << "Even Numbers: ";							//start from main will act as the first number of our number range
	for (int i = start; i <= end; i++) {				//end will act as the final number of our number range
		if (i % 2 == 0) {								//n%2==0 is the method to find even numbers
			cout << i << " ";
		}
	}
	cout << endl << "Odd Numbers: ";					
	for (int i = start; i <= end; i++) {
		if (i % 2 != 0) {								//n%2!=0 is the opposite method that we used before but it finds odd numbers
			cout << i << " ";
		}
	}
}