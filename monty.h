#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
 
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
 
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t var;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*calculator*/
void add_nodes(stack_t **head, unsigned int counter);
void sub_nodes(stack_t **head, unsigned int counter);
void mod_nodes(stack_t **head, unsigned int counter);
void div_nodes(stack_t **head, unsigned int counter);
void mul_nodes(stack_t **head, unsigned int counter);

/*print*/
void m_pint(stack_t **head, unsigned int line_number );

/*Mutate*/
void push_node(stack_t **head, unsigned int number);
void pop_node(stack_t **head, unsigned int counter);
void pall_node(stack_t **head, unsigned int number);
void addnode(stack_t **head, int n);
void f_swap(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter);

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);

void f_nop(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
#endif
