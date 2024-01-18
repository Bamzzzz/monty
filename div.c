#include "monty.h"

/**
 * monty_div - divide the second value from the top
 * @stack: stack
 * @line_number: current working line number
 * description: the result is stored in the second value node
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
set_op_tok_error(short_stack_error(line_number, "div"));
return;
}
if ((*stack)->next->n == 0)
{
set_op_tok_error(div_error(line_number));
return;
}
(*stack)->next->next->n /= (*stack)->next->n;
monty_pop(stack, line_number);
}
