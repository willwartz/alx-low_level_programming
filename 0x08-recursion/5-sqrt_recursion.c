#include "main.h"
/**
 * root_finder - finds roots.
 * @n: number of interest.
 * @sq: temp square
 * @i: test integer
 * Return: squareroot of n.
 */
int root_finder(int n, int i)
{
	int sq;

	sq = (i * i);
	if (i <= (n / 2) && sq != n)
		return(root_finder(n, i + 1));
	else if(sq == n)
    		return (i);
	else
		return (-1);
}

/**
 * _sqrt_recursion - finds natural squareroot of n.
 * @n: number of interest.
 * Return: squareroot of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
    		return (-1);
    	if (n == 0)
    		return (0);
   	if (n == 1)
    		return (1);
   	return (root_finder(n , 1));
}
