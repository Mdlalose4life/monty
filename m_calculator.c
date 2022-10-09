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
