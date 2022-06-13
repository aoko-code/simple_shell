#include "main.h"
/**
 * list_len - returns the number of elements linked.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{

size_t nelem;


nelem = 0;

while (h != NULL)

{

h = h->next;

nelem++;

}

return (nelem);

}
