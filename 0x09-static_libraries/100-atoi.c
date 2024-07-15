#include "main.h"
#include <stdlib.h>

/**
 * _atoi - a function that convert a string to an integer
 * @s: parameter function
 * Return: result + sign
 */

int _atoi(char *s)
{
	int store = 0; /*to store integer*/
	int sign = 1; /*determine pos or neg numbers*/
	int i = 0; /*to iterate through the string*/
	int start = 0; /* the function has encountered*/
	/*and processed at least one numeric character*/
	while (s[i] != '\0')
	{
		/*determine pos and neg values*/
		if (s[i] == '-' && !start)
		{
			sign *= -1;
		}
		else if (s[i] == '+' && !start)
		{
			sign *= 1;
		}
		/*handle numeric characters*/
		else if (s[i] >= '0' && s[i] <= '9')
		{
			store = store * 10 + (s[i] - '0');
			start = 1;
		}
		/*stop conversion when encounter characters after*/
		/*starting numeric conversion*/
		else if (start)
		{
			break;
		}
		i++;
	}
	return (store * sign);
}
