#include <iostream>

using namespace std;

int N, M;
int i, j;
int arr[8];
int finds(int cnt = 0)
{
	if (cnt == M) {
		for (i = 1; i < M; i++) {
			j = i - 1;
			for (; j >= 0; j--) {
				if (arr[j] > arr[i])
					return 0;
			}
		}
		for (i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		return 0;
	}
	for (i = 0; i < N; i++) {
		arr[cnt] = i + 1;
 		int newCnt = cnt + 1;
		finds(newCnt);
	}
	if (M > cnt)
		return 0;
}

int main()
{
	cin >> N >> M;
	finds();
}
