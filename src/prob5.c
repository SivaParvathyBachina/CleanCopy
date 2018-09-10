#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i,j, n, x,k,m;
if (argc < 2){ /* check for valid number of command-line arguments */
fprintf(stderr, "This program requires the arguments in the below format");
fprintf(stderr,"Usage: %s -n processes -k loop iteration -m sleeptime", argv[1]);
return 1;
}

while((x = getopt(argc,argv, "n:k:m:")) != -1)
switch(x)
{
case 'n':
       	n = atoi(optarg);
	break;
case 'k':
        k = atoi(optarg);
	break;
case 'm':
        m = atoi(optarg);
        break;
default: 
	fprintf(stderr, "Use: %s -n processes -k loop iteration -m sleeptime", argv[1]);
}

//fprintf(stderr, "%d, %d, %d", n,k,m);

//n = atoi(argv[1]);
for (i = 1; i < n; i++)
if (childpid = fork())
break;
for(j=0; j<k; j++)
{
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
sleep(m);
}
return 0;
}

