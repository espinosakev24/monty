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
/**
 * struct global_s - strcut
 * @fp: asdfasd
 * @buff: buffer
 */
typedef struct global_s
{
	FILE *fp;
	char *buff;
} global_t;
extern global_t global;
int _isdigit(int c);
stack_t *add_dnodeint(stack_t **head, int n);
void do_push(stack_t **head, int line);
int *make_op(stack_t **head, char *str, int line);
void free_list(stack_t *head);
void free_dlist(stack_t **head);
void print_head(stack_t **h, int line);
void swapping(stack_t **h, int line);
int dlistint_len(stack_t **h);
void do_pop(stack_t **h, int line);
size_t print_dlistint(stack_t **h);
void simple_math(stack_t **h, int line, int signal, char *str);
int math_operations(int n1, int n2, int signal, int line);
void do_pchar(stack_t **h, int line);
void printstr(stack_t **h);
int rotl(stack_t **h);
int rotr(stack_t **h);
#endif
