#include <iostream>

using namespace std;

int main()
{
	bool wrong;
	for (long i = 9876543208; i > 7; i -= 8) {
		long k = i;
		int a[10];
		wrong = false;
		while (k > 0) {
			a[k % 10]++;
			k /= 10;
		}
		for (int j = 0; j < 10; j++) {
			if (a[j] > 1) {
				for (int t = 0; t < 10; t++) {
					a[t] = 0;
				}
				wrong = true;
			}
		}
		if (wrong) {
			continue;
		}
		k = i / 8;
		for (int j = 0; j < 10; j++) {
			a[j] = 0;
		}
		while (k > 0) {
			a[k % 10]++;
			k /= 10;
		}
		for (int j = 0; j < 10; j++) {
			if (a[j] > 1) {
				for (int t = 0; t < 10; t++) {
					a[t] = 0;
				}
				wrong = true;
			}
		}
		if (wrong) {
			continue;
		}
		cout << i / 8 << endl;
		break;
	}
}