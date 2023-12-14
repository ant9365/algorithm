#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/6603
int S[13] = {0, };
int result[6] = {0,};
int k;
void print() {
	for (int i = 0; i < 6; i++) {
		cout << result[i] << " ";
		result[i] = 0;
	}
	cout << endl;
	return;

}
void getLotto(int start = 0, int cnt = 0) {
	if (cnt == 6) 
		print();
	for (int j = start; j < k; j++) {
		result[cnt] = S[j];
		getLotto(j + 1, cnt + 1);
	}
}
int main(void) {
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> S[i];
	}
	getLotto();
}
