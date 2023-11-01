#include "main.h"
/**
 * main - Write a program that multiplies two numbers
 *
 * @argc: Argument countt
 * @argv: Argument vector
 *
 * Return: 0 Success 1 Error
 **/
int main(int argc, char *argv[])
{
	int total;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
		return (0);
	}
}
