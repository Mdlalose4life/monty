#include "monty.h"
/**
 * pop_node - removes the top most element of a stack.
 * @head: double pointer stack's head
 * @counter: counts the executed lines
 * Return: void
*/
void pop_node(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
