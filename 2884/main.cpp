#include <iostream>
//https://www.acmicpc.net/problem/2884
using namespace std;

//기존 시간에서 시 가 바뀌면 + 15 
//분이 바뀌면 -45
int main() {
	int h, m;
	cin >> h >> m;
	if (m < 45)
	{
		if (h==0)
			h = 23;
		else
			h--;
		m = m + 15;
	}
	else
		m = m - 45;
	cout << h << " " << m;
}
