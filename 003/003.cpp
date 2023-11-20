#include <iostream>

using namespace std;

int main()
{
	int mas[10];
	mas[0] = 0;
	mas[1] = 1;
	mas[2] = 2;
	mas[3] = 3;
	mas[4] = 4;
	mas[5] = 5;
	mas[6] = 6;
	mas[7] = 7;
	mas[8] = 8;
	mas[9] = 9;
	int n = 0;
	for (int q = 0; q <= 10; q++) {
		if (q % 2 != 0) {
			n += 1;
		}
	}
	cout << "Nechetnih chisel: " << n << endl;
}