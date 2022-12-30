#include<iostream>
using namespace std;
int doubler(int num);
int main() {
	int num;
	do {
		cin >> num;
		cout << " " << doubler(num) << endl;
	} while (num != 0);
}

int doubler(int num){
	return num * 2;
}