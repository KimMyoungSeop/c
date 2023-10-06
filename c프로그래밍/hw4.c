/*
202110909 ±è¸í¼·
*/
#include <stdio.h>

int main(void) {
	int i, j, t = 0;
	printf("input number\n");
	scanf("%d", &i);
	for (j = 2; j < i; j++) {
		if (i % j == 0) {
			t++;
		}
	}
	if (t == 0) {
		printf("prime number");
	}
	else
		printf("Not prime number");

	return 0;
}