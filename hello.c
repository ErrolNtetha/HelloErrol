#include <stdio.h>

int main(void)
{
	char name[50];

	printf("Name: ");
	fgets(name, 50, stdin);

	printf("Hello, %s", name);
}