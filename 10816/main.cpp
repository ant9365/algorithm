#include <iostream>
//https://www.acmicpc.net/problem/10816
using namespace std;

int main(void) {
	int target[500000], cnt[20000000];
	int n, m, temp;
	cin >> n;
	for (int i = 1; i <= n; i++) { 
		cin >> temp; 
		cnt[temp]++; 
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> target[i];
	}

	for (int i = 1; i <= m; i++)  {
		cout << cnt[target[i]] << '\n';
	}

	return 0;
}
