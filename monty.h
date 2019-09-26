#ifndef Monty
#define Monty
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
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
int count_line(char **argv);
char **get_text(int argc, char **arv);
int _isdigit(int c);
int file_chars(char **arv);
stack_t *add_dnodeint(stack_t **head, int n);
stack_t *check_command(char **content);
char *no_breakline(char *buffer);
size_t print_dlistint(stack_t *h);
void free_pointer(char **pointer);
void free_list(stack_t *head);
#endif
