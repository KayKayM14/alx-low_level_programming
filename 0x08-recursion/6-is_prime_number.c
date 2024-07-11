#include "main.h"

/**
 * check_prime - helper function to check for prime numbers
 * @n: number to check
 * @i: current divisor to check
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 0)
		return (0);

	if (i * i > n) /* If i squared is greater than n,*/
		/*no need to check further*/
		return (1);
	if (n % i == 0) /* If n is divisible by i, it's not a prime number*/
		return (0);
	return (check_prime(n, i + 1)); /* Check next divisor*/
}

/**
 * is_prime_number - determines if a number is a prime number
 * @n: number to check
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2)); /*Start checking from 2 upwards*/
}
