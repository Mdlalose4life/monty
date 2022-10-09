#include "monty.h"
/**
 * mod_nodes - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: double pointer to stack's head
 * @counter: counts the lines executed.
 * Return: void
*/
void mod_nodes(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, mod;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	*head = temp->next;
	free(temp);
}
