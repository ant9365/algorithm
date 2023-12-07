#include<stdio.h>

void main() {
	int up, down,result, high = 0, day;
	scanf("%d %d %d", &up, &down, &result);
	for (day = 1; high < result; day++) {
	// 하루에 이동할수 있는 거리 high + up;
		high = high + up;
		if (high >= result) 
			break;
	// 정상 못가면 high - down  
		high = high - down;
	}
	printf("%d", day);
}
