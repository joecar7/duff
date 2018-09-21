#include <stdio.h>

void send(register short *to, register short *from, register count)
{
	register n=(count+7)/8;
	switch(count%8)
	do{
	case 0:	*to = *from++;
	case 7:	*to = *from++;
	case 6:	*to = *from++;
	case 5:	*to = *from++;
	case 4:	*to = *from++;
	case 3:	*to = *from++;
	case 2:	*to = *from++;
	case 1:	*to = *from++;
	}while(--n>0);
}

int main(int argc, char **argv)
{
	while (*argv)
		printf(" %s", *argv++);
	printf("\n");
	argv -= argc;
	send(argv, argv+1, argc-1);
	printf("%s:", *argv++);
	while (*argv)
		printf(" %s", *argv++);
	printf("\n");
	return 0;
}
