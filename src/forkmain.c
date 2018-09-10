#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i, n,x,k ;
char errorstring[200];
opterr = 0;
if (argc < 2){ /* check for valid number of command-line arguments */
fprintf(stderr, "Invalid number of arguments. Please give it in the following format");
fprintf(stderr, "Usage: %s  -n processess -h [help] -p [error message]", argv[0]);
return 1;
}
while((x = getopt(argc,argv, "phn:")) != -1)
switch(x)
{
case 'p':
        snprintf(errorstring, 70, "%s Error: Detailed Error", argv[0]);
        perror(errorstring);
        return 1;
case 'h':
        fprintf(stderr, "Usage: -n processes -h [help] -p [error message] \n");
        return 1;
case 'n':
        n = atoi(optarg);
       // fprintf(stderr, "n value :%d");
        break;
case '?':
        fprintf(stderr, "Please give '-h' for help to see valid arguments \n");
        return 1;
}

//n = atoi(argv[1]);
for (i = 1; i < n; i++) 
	if (childpid = fork())
		break;
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid); 
return 0;
}

