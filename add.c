#include "monty.h"

/**
 * monty_add - Add the top two values of a stack
 * @stack: stack
 * @line_number: current working line number
 * description: The result is stored in the second value node
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
set_op_tok_error(short_stack_error(line_number, "add"));
return;
}
(*stack)->next->next->n += (*stack)->next->n;
monty_pop(stack, line_number);
}
