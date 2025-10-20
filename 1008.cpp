#include <stdio.h>
int main() {
	long double a = 0, b = 0;

	scanf("%Lf %Lf", &a, &b);

	printf("%.9Lf", a/b);

	return 0;
}