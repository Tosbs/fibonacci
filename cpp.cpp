#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <random>


using namespace std;

int main() {
	int x = 1;
	int y = 0;
	int y1 = 0;
	int z;
	int z1 = 0;
	cin >> z;
	cout << "###############" << endl;
	while (z > 0) {
		x = x + y1;
		y1 = y;
		cout << x << endl;
		y = x;
		z--;
		z1++;
		
	}

}
