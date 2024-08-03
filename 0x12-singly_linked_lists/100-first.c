#include <stdio.h>

/**
 * print_message - prints a specific message before the main function
 *
 * Description: This function uses the constructor attribute to ensure
 * that the message is printed before the main function is executed.
 * The message is related to a tortoise and hare race.
 *
 * Return: void
 */

/*function to print the required message*/
void __attribute__((constructor)) print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
