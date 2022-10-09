#include "monty.h"
/**
 * mul_nodes - multiplies the top two elements of the stack.
 * @head: double pointer to stack's head
 * @counter: counts the lines executed.
 * Return: void
*/
void mul_nodes(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	mod = temp->next->n * temp->n;
	temp->next->n = mod;
	*head = temp->next;
	free(temp);
}

