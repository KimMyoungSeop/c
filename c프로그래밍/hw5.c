/*
202110909 ���
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
	printf("�����Է�\n");
	scanf("%d", &num);
	bin(num);
	return 0;
}