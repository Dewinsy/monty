#include "monty.h"

/**
* main - main function
* @ac: integer
* @av: arguments
* Return: 0 if success
*/
int main(int ac, char **av)
{
	stack_t *head = NULL;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	getlines(&head, av);
	free_stack(head);
	return (0);
}
