#include <stdio.h>
extern char **environ;

int main(void)
{
	for (char **env = environ; *env; ++env) {
		fprintf(stdout, "%s\n", *env);
	}

	return 0;
}