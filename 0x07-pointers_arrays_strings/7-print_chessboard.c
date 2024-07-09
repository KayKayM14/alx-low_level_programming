#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the 2D array representing the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /*loop through each row of chessboard*/
	{
		for (j = 0; j < 8; j++) /*loop through each coloumn*/
		{
			_putchar(a[i][j]); /*print each char in current row*/
		}
		_putchar('\n'); /*print new line after each row*/
	}
}
