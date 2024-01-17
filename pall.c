#include "monty.h"
/**
 * f_pall - prints all the value on the stack
 * @head: stack head to be printed
 * @counter: not necessarily used
 * Return: return null
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;

(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
