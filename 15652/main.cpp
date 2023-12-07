#include <iostream>

using namespace std;

//재귀함수로 해당 부분을 풀어야 한다.
//같은 수를 골라도 되므로 방문에 대한 check 는 필요없다.  
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
