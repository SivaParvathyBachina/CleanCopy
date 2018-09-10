#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i,j, n, x,k,m;
int nchars;
if (argc < 2){ /* check for valid number of command-line arguments */
fprintf(stderr, "This program requires the arguments in the below format");
fprintf(stderr,"Usage: %s -n processes -m charactercount", argv[1]);
return 1;
}

while((x = getopt(argc,argv, "n:m:")) != -1)
switch(x)
{
case 'n':
       	n = atoi(optarg);
	break;
case 'm': 
	nchars = atoi(optarg);
	break; 
default: 
	fprintf(stderr, "Use: %s -n processes -m charactercount", argv[1]);
}
char mybuf[nchars];
if(n<1 || nchars<1)
{
fprintf(stderr, "One of the following arguments is invalid \n");
fprintf(stderr, "Usage: %s -n processcount -m charactercount \n", argv[1]);
return 1;
}
//fprintf(stderr, "%d, %d",nchars, n);

//n = atoi(argv[1]);
for(i=1; i< n; i++) {
if (childpid = fork())
break;
}
wait();

j=1;
while(j<=nchars)
{
fprintf(stdout, "Please Enter the character %d, %ld \n", j, getpid());
scanf(" %c", &mybuf[j]);
fprintf(stderr,"buffer value at %d, %c \n",j, mybuf[j]);
j++;
}

mybuf[nchars+1] = '\0';
fprintf(stderr, "Process ID: %ld, %s \n", (long) getpid(), mybuf);
return 0;
}

