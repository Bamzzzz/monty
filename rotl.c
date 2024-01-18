#include "monty.h"

/**
 * monty_rotl - Rotates the top value of stack to the bottom
 * @stack: stack
 * @line_number: working line number
 */
void monty_rotl(stack_t **stack, unsigned int line_number)
{
stack_t *top, *bottom;

if ((*stack)->next == NULL || (*stack)->next->next == NULL)
return;

top = (*stack)->next;
bottom = (*stack)->next;
while (bottom->next != NULL)
bottom = bottom->next;

top->next->prev = *stack;
(*stack)->next = top->next;
bottom->next = top;
top->next = NULL;
top->prev = bottom;

(void)line_number;
}
