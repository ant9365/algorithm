#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int n, m, left, right, mid;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	sort(a.begin(), a.end());

	left = a[0];
	right = a[n - 1];
	int tmp = -1;
	while (left <= right) {
		mid = (left + right) / 2;
		int cnt = 1;
		int curr = a[0];
		for (int i = 1; i < n; i++) {
			if (a[i] - curr >= mid) {
				cnt += 1;
				curr = a[i];
			}
		}
		if (cnt > m) {
			left = mid + 1;
		}else {
			right = mid - 1;
			tmp = mid;
		}
	}
	
	cout << tmp;
	return 0;
}
