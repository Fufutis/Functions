#include<iostream>
using namespace std;
const int students = 5;
int grades[students];															//goals:
void studentgrades();															//input from func												
int min_func();																	//find min from func
int max_func();																	//find max from func
double averag_func();															//find avg from func
void sort_func();																//sorted asc order and output from func

int main() {
	studentgrades();															//asks for grades and input those grades
	cout << "\nThe lowest grade is " << min_func() << "\n\n";					//gets the min of grades
	cout << "The highest grade is " << max_func() << "\n\n";					//gets the max of grades
	cout << "The average of all the grades is " << averag_func() << "\n\n";		//gets the average of grades
	sort_func();																//sorts and outputs the grades in asc order
}

void studentgrades() {
	cout << "Give grades to " << students << " students" << endl;
	for (int i = 0; i < students; i++) {
		cout << "Student " << i+1 << ": ";
		cin >> grades[i];
	}
}
int min_func() {
	int min = INT_MAX;
	for (int i = 0; i < students; i++) {
		if (grades[i] < min) {
			min = grades[i];
		}
	}
	return min;
}
int max_func() {
	int max = INT_MIN;
	for (int i = 0; i < students; i++) {
		if (grades[i] > max) {
			max = grades[i];
		}
	}
	return max;
}
double averag_func() {
	double sum = 0;
	for (int i = 0; i < students; i++) {
		sum += grades[i];
	}
	return sum / students;
}
void sort_func() {
	int temp;										
	bool swapped;																//swapped will break the loop if it gets sorted earlier
	cout << "From lowest to highest grades: ";
	for (int i = 0; i < students - 1; i++) {
		swapped = false;
		for (int j = 0; j < students - i - 1; j++) {
			if (grades[j] > grades[j + 1]) {
				temp = grades[j];
				grades[j] = grades[j + 1];
				grades[j + 1] = temp;
				swapped = true;
			}
		}
		if (swapped == false) {
			break;
		}
	}
	for (int i = 0; i < students; i++) {
		cout << grades[i] << " ";
	}
	cout << endl;
}