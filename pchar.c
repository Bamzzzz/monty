#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack
 * @head: stack head
 * @counter: line number in stack
 * Return: return null
 */
void f_pchar(stack_t **head, unsigned int counter)
{
stack_t *h;

h = *head;

if (h->n > 127 || h->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
if (!h)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%c\n", h->n);
}
