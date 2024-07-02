#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to the string to reverse
 */

void rev_string(char *s)
{
	int i;
	int length = 0;

	/*return length of a string*/
	for (i = 0; s[i] != '\0'; i++)
		length++; /*this keeps track of charact in array*/
	/*get half of the string*/
	for (i = 0; i < length / 2; i++)
	{

	char k; /*the pointer to a temporary character*/

		/*swapping characters*/
		k = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = k;
	}
}
