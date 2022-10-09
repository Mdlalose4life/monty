#include "monty.h"
/**
 * add_nodes - adds the top two elements of the stack.
 * @head: double pointer to stack's head
 * @counter: counts the lines executed.
 * Return: void
*/
void add_nodes(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, sum;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*head = temp->next;
	free(temp);
}
