#include "monty.h"
/**
 * f_swap - swaps the top two elements of the stack.
 * @head: double pointer to stack's head
 * @counter: counts the number exectued
 * Return: void
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, aux;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	aux = temp->n;
	temp->n = temp->next->n;
	temp->next->n = aux;
}
