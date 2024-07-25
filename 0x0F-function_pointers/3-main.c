#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2 = 0;
	int result;
	int (*operation)(int, int);

	/*Check the number of arguments*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Convert the arguments to integers */
	num1 = atoi(argv[1]);
	num1 = atoi(argv[3]);

	/* Get the operation function based on the operator */
	operation = get_op_func(argv[2]);

	/* Check if the operator is valid */
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	/*Check for division by zero*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Perform the operation and print the result */
	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
