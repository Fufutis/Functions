#include<iostream>
using namespace std;

void mtable(int num, int size);

int main() {
	int num, size;
	cout << "Give a number: "; cin >> num;
	cout << "Give size for the multiplication tables: "; cin >> size;
	mtable(num, size);
}
void mtable(int num, int size) {
	for (int i = 0; i <= size; i++) {
		cout << num << "x" << i << "=" << num * i << endl;
	}
}