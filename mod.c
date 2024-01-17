#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack
 * @head: stack head
 * @counter: line number on the stack
 * Return: return null
 */
void f_mod(stack_t **head, unsigned int counter)
{
int len = 0, aux;
stack_t *h;

h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
while (h)
{
len++;
h = h->next;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n % h->n;
h->next->n = aux;
*head = h->next;
free(h);
}
