/*
202110909 ±è¸í¼·
*/
#include <stdio.h>

int bin(int num) {
	if (num == 0)
		return 0;
	bin(num / 2);
	printf("%d", num % 2);


}
int main(void) {
	int num;
	printf("¼ıÀÚÀÔ·Â\n");
	scanf("%d", &num);
	bin(num);
	return 0;
}