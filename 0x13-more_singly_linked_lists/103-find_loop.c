#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bat, *rat;

	bat = rat = head;
	while (bat && rat && rat->next)
	{
		bat = bat->next;
		rat = rat->next->next;
		if (bat == rat)
		{
			bat = head;
			break;
		}
	}
	if (!bat || !rat || !rat->next)
		return (NULL);
	while (bat != rat)
	{
		bat = bat->next;
		rat = rat->next;
	}
	return (rat);
}
