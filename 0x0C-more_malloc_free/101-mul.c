#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * check_digits - checks if a string contains only digits
 * @str: the string to check
 * Return: 1 if only digits, 0 otherwise
 */

int check_digits(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * prints_error_and_exit - prints and error message and exit
 */

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two pos numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		print_error_and_exit();
	}

	if (!check_digits(argv[1]) || !check_digits(argv[2]))
	{
		print_error_and_exit();
	}

	num1 = strtoul(argv[1], NULL, 10);
	num2 = strtoul(argv[2], NULL, 10);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
