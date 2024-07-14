#include <stdio.h>
#include <stdlib.h>  /*For atoi function*/

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	/*Check if exactly two arguments are provided*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/*Convert arguments from strings to integers*/
	/*Assume argv[0] is the program name (in this case, "K")*/
	/*argv[1] and argv[2] are the two numbers*/
	num1 = atoi(argv[1]); /*Convert first argument to an integer*/
	num2 = atoi(argv[2]); /*Convert second argument to an integer*/

	/*Perform a silly operation (adding the numbers)*/
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
