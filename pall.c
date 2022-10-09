#include "monty.h"
/**
 * pall_node - prints all the values on the stack.
 * @head: the double pointer to the stack's head.
 * @counter: counts lines executed.
 * Return: void
*/
void pall_node(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
