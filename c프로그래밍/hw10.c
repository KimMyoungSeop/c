#include <stdio.h>

typedef struct {
	char name[20];
	char country[20];
	double pop;
}city;

int main(void) {
	int i;
	city city[3];
	printf("input 3 cities\n");
	for (i = 0; i < 3; i++) {
		printf("name : ");
		scanf("%s", city[i].name, sizeof(city[i].name));
		printf("country : ");
		scanf("%s", city[i].country, sizeof(city[i].country));
		printf("population : ");
		scanf("%lf", &city[i].pop);
	}
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a popluation of %.0lf people\n", i+1, city[i].name, city[i].country, city[i].pop);
	}
	return 0;
}