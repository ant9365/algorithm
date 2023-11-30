#include <stdio.h>

void main() {
	int arr[30] = { 0, };		
	for (int i = 0; i < 28; i++) {	
		int n;
		scanf("%d", &n);
		arr[n - 1] = 1;
	}
	for (int i = 0; i < 30; i++)	
		if (arr[i] == 0)
			printf("%d\n", i + 1);
}
