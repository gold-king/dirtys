#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float f2c(float temp_f)
{
	return ((temp_f - 32) / 1.8);
}

float c2f(float temp_c)
{
	return (temp_c * 1.8 + 32);
}

void usage(void)
{
	fprintf(stdout, "tconvert   -- A tool for convert Celsius and Fahrenheit eatch other.\n"
		        "\n"
                        "USAGE: tconvert OPTION NUM\n"
		        "\n"
		        "  OPTION:\n"
		        "    F/f:   The current is Fahrenheit, convert to Celsius.\n"
		        "    C/c:   The current is Celsius, convert to Fahrenheit.\n"
		        "  NUM:    The number of temperture.\n");
}

int main(int argc, char **argv)
{
	if (argc != 3) {
		usage();
		exit(1);
	} else {
		if ((strcmp(argv[1], "f") == 0) || (strcmp(argv[1], "F") == 0)) {
			fprintf(stdout, "Your temperture convert to Celsius is: %.2f°C\n",
				f2c(atof(argv[2])));
			exit(EXIT_SUCCESS);
		} else if ((strcmp(argv[1], "c") == 0) || (strcmp(argv[1], "C") == 0)) {
			fprintf(stdout, "Your temperture convert to Fahrenheit is: %.2f°F\n",
                                c2f(atof(argv[2])));
			exit(EXIT_SUCCESS);
		} else {
			fputs("Unknow arguments.\n", stdout);
			usage();
			exit(EXIT_FAILURE);
		}
	}

	return 0;
}
