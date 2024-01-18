#include "monty.h"
#include <string.h>

int check_mode(stack_t *stack);
void free_stack(stack_t **stack);
int init_stack(stack_t **stack);

/**
 * check_mode - Check if stack linked list is in stack
 * @stack: a pointer to the top or bottom of a stack
 * Return: If the stack_t is in stack mode - STACK (0).
 * If the stack_t is in queue mode - QUEUE (1).
 * Otherwise - 2.
 */
int check_mode(stack_t *stack)
{
if (stack->n == STACK)
return (STACK);
else if (stack->n == QUEUE)
return (QUEUE);
return (2);
}

/**
 * free_stack - Free stack
 * @stack: a pointer to the top and bottom of stack
 */
void free_stack(stack_t **stack)
{
stack_t *tmp = *stack;

while (*stack)
{
tmp = (*stack)->next;
free(*stack);
*stack = tmp;
}
}

/**
 * init_stack - Initialize stack
 * @stack: a pointer to an unitialized stack
 * Return: If an error occurs - EXIT_FAILURE
 */
int init_stack(stack_t **stack)
{
stack_t *s;

s = malloc(sizeof(stack_t));
if (s == NULL)
return (malloc_error());

s->n = STACK;
s->prev = NULL;
s->next = NULL;

*stack = s;

return (EXIT_SUCCESS);
}
