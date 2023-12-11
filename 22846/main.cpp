#include <iostream>

using namespace std;
int main() {
	int array[200000]  = {0,};
	int cnt;
	cin >> cnt;
	array[2] = 1;
	array[6] = 1;

	int i, j;
	for (i = 8; i <= cnt; i++) {
		j = 2;
		while(1) {
			if ((i % j)) 
				break;
			array[i] = array[i - j];
			j++;
		}
	}
	if (array[cnt])
		cout << "Kali";
	else
		cout << "Ringo";
	return 0;
}
