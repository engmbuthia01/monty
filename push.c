#include "monty.h"

/**
 * push - Pushes an element onto the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number in the Monty bytecode file
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value;
	stack_t *new_node;

	if (!isdigit(value))
	{
		error_exit("L", line_number, "usage: push integer\n");
	}

	value = atoi(value_str);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		error_exit("Error: malloc failed\n", line_number);
	}
	new_node->n = value;
	new_node->prev = NULL;

	if (*stack != NULL)
	{
		(*stack)->prev = new_node;
	}
	new_node->next = *stack;
	*stack = new_node;
}

