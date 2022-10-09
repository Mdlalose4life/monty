#include "monty.h"
/**
  *sub_nodes - subtracts the top two elements of the stack.
  *@head: double pointer to stack's head
  *@counter: counts the lines executed.
  *Return: void
 */
void sub_nodes(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int def, nodes;

	temp = *head;
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	def = temp->next->n - temp->n;
	temp->next->n = def;
	*head = temp->next;
	free(temp);
}
