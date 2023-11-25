#include <stdio.h>
#include <string.h>

int main(void) {
	char str[50];
	int i, len;
	printf("input : ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	puts(str);
	return 0;
}