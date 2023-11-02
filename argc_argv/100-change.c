#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 Success 1 Error
 **/
int main(int argc, char *argv[])
{
	int total, coins;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
	}
	for (total = 0; coins > 0; total++)
	{
		if (coins - 25 >= 0)
			coins = coins - 25;
		else if (coins - 10 >= 0)
			coins = coins - 10;
		else if (coins - 5 >= 0)
			coins = coins - 5;
		else if (coins - 2 >= 0)
			coins = coins - 2;
		else if (coins - coins >= 1)
			coins = coins - 1;
	}
	printf("%d\n", total);
	return (0);
}
