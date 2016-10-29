#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) 
{
        int num;
        srand((unsigned)time(NULL));
 
        for (int i = 0; i < 10; i++) {
                num = rand();
	        fprintf(stdout, "Random Number: %d\n", num);
        }
         
        return EXIT_SUCCESS;
}
