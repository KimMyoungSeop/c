/*
202110909 ±è¸í¼·
*/

#include <Stdio.h>

int main(void) {
	double kilo, mile;
	printf("enter kilometers\n");
	scanf("%lf", &kilo);
	mile = kilo / 1.609;
	printf("%.1lf km is %.1lf miles", kilo, mile);

	return 0;
}