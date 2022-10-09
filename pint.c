#include "monty.h"
/**
 * m_pint - prints the value at the top of the stack.
 * @head: double pointer to stack's head.
 * @counter: counts the lines executed.
 * Return: void
*/
void m_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(var.file);
		free(var.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
