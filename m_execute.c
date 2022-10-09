#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
instruction_t opst[] = {{"push", push_node}, {"pall", pall_node}, {"pint", m_pint},
				{"pop", pop_node},
				{"swap", f_swap},
				{"add", add_nodes},
				{"nop", f_nop},
				{"sub", sub_nodes},
				{"div", div_nodes},
				{"mul", mul_nodes},
				{"mod", mod_nodes},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
unsigned int i = 0;
char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	var.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
      opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
