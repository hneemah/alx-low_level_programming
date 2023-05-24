#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes of its own
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num = 0, cnt = 0;
	char *tmp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	tmp = (char *)&main;
	for (cnt = 0; cnt < num; cnt++)
	{
		printf("%02hhx", tmp[cnt]);
		if (cnt != num - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
