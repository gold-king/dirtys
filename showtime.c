#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void)
{
	static time_t t;
	static struct tm *ltp;
	static char buf[SIZE];

	t = time(NULL);
	ltp = localtime(&t);
	if (ltp == NULL) {
		fputs("Localtime Error!\n", stdout);
		exit(EXIT_FAILURE);
	}

	if (strftime(buf, SIZE, "%F %I:%M:%S", ltp) == 0) {
	  fprintf(stderr, "STRFTIME function error.\n");
	  exit(1);
	}

	fprintf(stdout, "Current time is: %s\n", buf);
	return EXIT_SUCCESS;
}
