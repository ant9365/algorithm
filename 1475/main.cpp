#include <iostream>
#include <string>
int main() {
	int a[10];
	int result;
	string dk;
	cin >> dk;
	for (int i = 0; i < dk.size(); i++) {
		if (dk[i] == '9') {
			dk[i] = '6';
		}
	}
	for (int i = 0; i < dk.size(); i++) {
		char tmp = dk[i] - '0';
		a[(int)tmp]++;
	}
	a[6] = (a[6] / 2) + (a[6] % 2);
	for (int i = 0; i < 10; i++) {
		if (a[i] > result)
			result = a[i];
	}
	cout << result;
}

