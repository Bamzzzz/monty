#include "monty.h"

/**
 * monty_pop - removes the top value element of a stack
 * @stack: stack
 * @line_number: current working line number
 */
void monty_pop(stack_t **stack, unsigned int line_number)
{
stack_t *next = NULL;

if ((*stack)->next == NULL)
{
set_op_tok_error(pop_error(line_number));
return;
}
next = (*stack)->next->next;
free((*stack)->next);
if (next)
next->prev = *stack;
(*stack)->next = next;
}
