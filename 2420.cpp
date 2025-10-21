#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int n = 0, m = 0;

	scanf("%lld %lld",&n,&m);

	printf("%lld", llabs(n - m));

	return 0;
}