#include<stdio.h>

void main() {
	int up, down,result, high = 0, day;
	scanf("%d %d %d", &up, &down, &result);
	for (day = 1; high < result; day++) {
		high = high + up;
		if (high >= result) 
			break;
		high = high - down;
	}
	printf("%d", day);
}
