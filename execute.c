#include "monty.h"
#include <string.h>

/**
 * get_op_func - opcode function
 * @opcode: opcode
 * Return: pointer to the corresponding function
 */
void (*get_op_func(char *opcode))(stack_t**, unsigned int)
{
instruction_t op_funcs[] = {
{"push", monty_push},
{"pall", monty_pall},
{"pint", monty_pint},
{"pop", monty_pop},
{"swap", monty_swap},
{"add", monty_add},
{"nop", monty_nop},
{"sub", monty_sub},
{"div", monty_div},
{"mul", monty_mul},
{"mod", monty_mod},
{"pchar", monty_pchar},
{"pstr", monty_pstr},
{"rotl", monty_rotl},
{"rotr", monty_rotr},
{"stack", monty_stack},
{"queue", monty_queue},
{NULL, NULL}
};
int i;

for (i = 0; op_funcs[i].opcode; i++)
{
if (strcmp(opcode, op_funcs[i].opcode) == 0)
return (op_funcs[i].f);
}
return (NULL);
}

/**
 * free_tokens - Free array of strings
 */
void free_tokens(void)
{
size_t i = 0;

if (op_toks == NULL)
return;

for (i = 0; op_toks[i]; i++)
free(op_toks[i]);

free(op_toks);
}

/**
 * token_arr_len - length of current op_toks
 * Return: Length of current op_toks
 */
unsigned int token_arr_len(void)
{
unsigned int toks_len = 0;

while (op_toks[toks_len])
toks_len++;
return (toks_len);
}

/**
 * is_empty_line - Checks if a line read from getline only contains delimiters
 * @line: pointer to the line
 * @delims: delimiter
 * Return: the line only contains delimiters - 1 Otherwise - 0.
 */
int is_empty_line(char *line, char *delims)
{
int i, j;

for (i = 0; line[i]; i++)
{
for (j = 0; delims[j]; j++)
{
if (line[i] == delims[j])
break;
}
if (delims[j] == '\0')
return (0);
}
return (1);
}
