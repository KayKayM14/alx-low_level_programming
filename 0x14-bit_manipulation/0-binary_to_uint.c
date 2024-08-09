#include <stdio.h>

/**
 * binar_to_unit - converts a binary number to an unsigned int.(pos num)
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there's an invalid character
 * or if the string is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /*var to store final result*/
	int i; /*loop counter*/

	/*check if input string is NULL*/
	if (b == NULL)
		return (0); /*Return 0 if the input is NULL*/

	/*Loop through each character in the string*/
	for (i = 0; b[i] != '\0'; i++)
	{
		/*check if character is not '0' or '1'*/
		if (b[i] != '0' && b[i] != '1')
			/*Return 0 if an invalid character is found*/
			return (0);
		/*Shift the current result left by 1 bit*/
		/*(equivalent to multiplying by 2)*/

		/*Then, add the current bit (0 or 1)*/
		/*to the result using bitwise OR*/
		result = (result << 1) | (b[i] - '0');
	}
	return (result); /*Return the final converted number*/
}
