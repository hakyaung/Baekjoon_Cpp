#include <stdio.h>
#include <time.h>
int main() {
	time_t t = time(NULL);
	struct tm* now;

	now = localtime(&t);

	printf("%ld-%02ld-%02ld", now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);

	return 0;
}