#include <Stdio.h>
#include <math.h>

double cal(int* p1,double avg) {
	double pow_result = 0;
	int i;
	for (i = 0; i < 5; i++) {
		pow_result += pow((avg-p1[i]), 2);
	}

	printf("standard Deviation = %.3lf", sqrt(pow_result / 5));
	return 0;
}

int main(void) {
	int arr[5];
	int i, total = 0;
	
	double avg;
	printf("enter 5 real numbers : ");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &arr[i]);
		total += arr[i];
	}
	
	avg = total / 5;
	cal(arr,avg);


	return 0;
}