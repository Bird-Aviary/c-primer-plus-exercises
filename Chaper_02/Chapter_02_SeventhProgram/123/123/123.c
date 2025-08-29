#include <stdio.h>

void one_three(void);
void two(void);

int main(void)

{
	printf("starting now:"); printf("\n");
	one_three();
	printf("done!"); printf("\n");
	return 0;
}

void one_three(void)

{
	printf("one"); printf("\n");
	two(); printf("\n");
	printf("three"); printf("\n");
}

void two(void)

{
	printf("two");
}