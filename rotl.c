#include "monty.h"
/**
  *f_rotl- rotates the stack upside
  *@head: double pointer to stack's head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *tmp1;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	tmp1 = (*head)->next;
	tmp1->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = tmp1;
}
