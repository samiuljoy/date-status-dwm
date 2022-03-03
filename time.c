#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 50

int main() {

	/* Yank from here */

	time_t tc;
	struct tm *content;
	char date[SIZE];

	time(&tc);
	content = localtime( &tc );

	strftime(date, sizeof(date), "%A %B %d %Y", content);

	/* Yank upto line above, the later portion is for fun */

	printf("%s\n", date);
	return 0;
}
