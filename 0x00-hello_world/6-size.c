#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 (successful)
 */

int main(void)
{
printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
printf("size of a float: %lu byte(s)", sizeof(float));

return (0);
}
