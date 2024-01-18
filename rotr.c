#include "monty.h"

/**
 * monty_rotr - Rotates the bottom value of stack to the top
 * @stack: stack
 * @line_number: current working line number
 */
void monty_rotr(stack_t **stack, unsigned int line_number)
{
stack_t *top, *bottom;

if ((*stack)->next == NULL || (*stack)->next->next == NULL)
return;

top = (*stack)->next;
bottom = (*stack)->next;
while (bottom->next != NULL)
bottom = bottom->next;

bottom->prev->next = NULL;
(*stack)->next = bottom;
bottom->prev = *stack;
bottom->next = top;
top->prev = bottom;

(void)line_number;
}
