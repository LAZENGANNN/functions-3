#include<iostream>
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y>0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
}
bool even(int k) {
	return k % 2 == 0;
}
bool insquare(int k) {
	int i = 1;
	while (i * i < k) {
		i++;
	}
	return i * i == k;
}
bool isPower5(int k) {
	int i = 5;
	while (i < k) {
		i = i * 5;
	}
	return i == k;
}



int main() {
	srand(time(nullptr));

	//proc23
	/*for (int i = 1; i <= 3; i++) {
		double x, y;
		x = (rand()%32001 - 16000) / 1000.0;
		y = (rand()%32001 - 16000) / 1000.0;
		cout << x << ' '<< y << ' ' << quarter(x, y) << endl;
		
	}*/

	//proc24
	/*for (int i = 1; i <= 10; i++) {
		int k = rand();
		cout << k << ' ' << boolalpha << even(k) << endl;
	}*/

	//proc25
	/*int x, k = 0;
	for (int i = 1; i <= 10; i++) {
		x = rand()% 9 + 1;
		cout << x << ' ';
		if (insquare(x)) {
			k++;
		}
	}
	cout << endl << k;*/

	//proc26
	int x, k = 0;
	for (int i = 1; i <= 10; i++) {
		x = rand() % 5 + 1;
		cout << x << ' ';
		if (isPower5(x)) {
			k++;
		}
	}
	cout << endl << k;



}