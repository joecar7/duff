#include <stdio.h>

void send(register char **to, register char **from, register count)
{
	do {
		*to = *from++;
	} while(--count>0);
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
