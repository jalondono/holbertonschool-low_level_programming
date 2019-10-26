#include "sort.h"

void swapNode(listint_t *copy)
{
	listint_t *nextAux;
	listint_t *copyHead = copy;

	if (copyHead->next == NULL)
		return;
	copyHead = copyHead->next;
	nextAux = copyHead->next;
	if (copyHead->next != NULL)
		copyHead->next->prev = copy;
	if (copy->prev != NULL)
		copy->prev->next = copyHead;
	copyHead->next = copy;
	copyHead->prev = copy->prev;
	copy->next = nextAux;
	copy->prev = copyHead;

}
void insertion_sort_list(listint_t **list) {
	listint_t *ant = *list;
	listint_t *act = *list;
	listint_t *sgt = *list;

	if (*list == NULL)
		return;
	sgt = sgt->next;
	if (sgt == NULL)
		return;
	while (act->next)
	{
		if (act->n > sgt->n)
		{
			swapNode(act);
			ant = act->prev;
			if (act->next != NULL)
			{
				sgt = act->next;
			}
			while (ant->prev)
			{
				ant = ant->prev;
				if (ant->n > act->prev->n)
				{
					swapNode(ant);
					break;
				}
			}

		}
	}
	print_list(sgt);
	*list = sgt;
}
