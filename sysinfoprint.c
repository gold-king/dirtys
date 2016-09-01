#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main(void)
{
        struct utsname uts;
  
        if (uname(&uts) == -1) {
                perror("Uname ERROR: ");
                exit(EXIT_FAILURE);
        }
  
        fprintf(stdout,
      	        "Node   Name: %s\n"
	        "System Name: %s\n"
	        "Release    : %s\n"
	        "Version    : %s\n"
	        "Machine    : %s\n",
	        uts.nodename, uts.sysname,
	        uts.release, uts.version,
	        uts.machine);

#ifdef _GUN_SOURCE
        fprintf(stdout, "Domain Name: %-s\n", uts.domainname);
#endif

        return EXIT_SUCCESS;
}
