#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: return null
 */
void f_swap(stack_t **head, unsigned int counter)
{
int len = 0, aux;
stack_t *h;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
fclose(bus.file);
free_stack(*head);
free(bus.content);
exit(EXIT_FAILURE);
}
h->n = h->next->n;
aux = h->n;
h->next->n = aux;
h = *head;
}
