#include "monty.h"
/**
 * div_nodes - divides the top two elements of the stack.
 * @head: double pointer to stack's head
 * @counter: counts the lines executed.
 * Return: void
*/
void div_nodes(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, prod;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	prod = temp->next->n / temp->n;
	temp->next->n = prod;
	*head = temp->next;
	free(temp);
}
