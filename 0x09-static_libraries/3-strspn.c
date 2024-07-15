#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: string to search
 * @accept: string containing chars to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	for (; *s != '\0'; s++)
	{
		int match = 0;
		char *a;

		for (a = accept; *a != '\0'; a++)/*iterate*/
		{
			if (*s == *a)/*check if s matches char in accep*/
			{
				count++;/*incre count if there no match*/
				match = 1; /*set match flag to true*/
				break;/*exit inner loop since*/
				/*match is found*/
			}
		}
		if (match == 0)/*if no match found for current s*/
			/*char, break out of outer loop*/
			break;
	}
	return (count); /*return count of matching chars*/
	/*found at beginning of s*/
}
