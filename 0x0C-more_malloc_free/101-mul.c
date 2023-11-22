#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* Function is_number - entry point
* Checks if a string is a number.
* @str: The string to check.
*
* Returns: 1 if the string is a number, 0 otherwise.
*/
int is_number(char *str)
{
for (int i = 0; i < strlen(str); i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/*
* Function: main
* --------------
* main - function of the program.
*
* @argc: The number of arguments passed to the program.
* @argv: The arguments passed to the program.
*
* Returns: 0 if the program executed successfully, 98 if there was an error.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
exit(98);
}

if (!is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
exit(98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

printf("%d\n", num1 * num2);

return (0);
}

