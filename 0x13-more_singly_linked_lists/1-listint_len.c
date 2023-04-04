#include "lists.h"

//function that prints number of elements

size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h != NULL)
	{
		h = h->next;
		nds++;
	}
	return (nds);
}
