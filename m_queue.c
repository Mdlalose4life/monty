#include "monty.h"
/**
 * f_queue - sets the format of the data to a queue 
 * @head: The pointer to the stack's head
 * @counter: counts lines executed
 * Return: void
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	var.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new value to be added on a new node.
 * @head: head of the stack
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}
