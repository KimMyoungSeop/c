/*
202110909 ±è¸í¼·
*/
#include <stdio.h>

int main(void) {
	int input[5];
	int odd[5];
	int even[5];
	int i, cnt1=0,cnt2=0;

	printf("input 5 integer : ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &input[i]);
	}
	for (i = 0; i < 5; i++) {
		if (input[i] % 2 == 0) {
			even[cnt1] = input[i];
			cnt1++;
		}
		else {
			odd[cnt2] = input[i];
			cnt2++;
		}
	}
	printf("odd number : ");
	for (i = 0; i < cnt2; i++) {
		printf("%d ", odd[i]);
	}
	printf("\neven number : ");
	for (i = 0; i < cnt1; i++) {
		printf("%d ", even[i]);
	}
	return 0;
}