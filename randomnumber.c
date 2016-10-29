#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv)
{
        int num;
        srand((unsigned)time(NULL));

	int length = 100;

	if (argc == 2) {
		length = atoi(argv[1]);
	}

        for (int i = 1; i <= length; ++i) {
                num = rand() % 10;
	        fprintf(stdout, "%2d", num);		

		if (i % 10 == 0) {
			fprintf(stdout, "\n");
		}
	}
         
        return EXIT_SUCCESS;
}
