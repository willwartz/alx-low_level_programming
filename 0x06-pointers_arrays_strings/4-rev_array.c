#include "main.h"
/**
 * _reverse_array - reverses array
 * @a: array.
 * @n: number of elements in array.
 * Return: 0 Success.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0, j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}